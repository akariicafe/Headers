@class NSString, NSNumber;

@interface NMSContainer : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *addedDate;
@property (retain, nonatomic) NSNumber *playedDate;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 name:(id)a1 type:(unsigned long long)a2;

@end
