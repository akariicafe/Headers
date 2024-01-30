@class NSString;

@interface FCLocalVersionedTag : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
