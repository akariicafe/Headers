@class NSNumber, NSString;

@interface EDAMPublicUserInfo : FATObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceLevel;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
