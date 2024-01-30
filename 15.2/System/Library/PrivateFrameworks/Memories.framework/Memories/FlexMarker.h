@class NSString;

@interface FlexMarker : NSObject <NSDictionaryCoding>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long markerID;
@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long number;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)encodeAsDictionary;
- (unsigned long long)_decodeTypeAndBarsFromName;
- (id)initWithName:(id)a0 markerID:(long long)a1 position:(long long)a2;

@end
