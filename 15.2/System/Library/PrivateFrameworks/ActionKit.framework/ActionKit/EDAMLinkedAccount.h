@class NSNumber, NSString;

@interface EDAMLinkedAccount : FATObject

@property (retain, nonatomic) NSNumber *inAccountUserId;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
