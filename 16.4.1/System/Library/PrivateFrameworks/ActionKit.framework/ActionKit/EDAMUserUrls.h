@class NSString;

@interface EDAMUserUrls : FATObject

@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSString *userStoreUrl;
@property (retain, nonatomic) NSString *utilityUrl;
@property (retain, nonatomic) NSString *messageStoreUrl;
@property (retain, nonatomic) NSString *userWebSocketUrl;
@property (retain, nonatomic) NSString *communicationEngineUrl;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
