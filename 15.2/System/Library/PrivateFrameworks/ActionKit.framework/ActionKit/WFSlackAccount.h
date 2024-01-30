@class NSString;

@interface WFSlackAccount : WFOAuth2Account

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *teamName;

+ (id)scopes;
+ (id)serviceID;
+ (id)sessionManager;
+ (id)clientID;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (BOOL)allowsMultipleAccounts;
+ (id)redirectURI;

- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
