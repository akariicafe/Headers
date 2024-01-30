@class NSString;

@interface WFSlackAccount : WFOAuth2Account

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *teamName;

+ (id)clientID;
+ (id)sessionManager;
+ (id)scopes;
+ (id)serviceID;
+ (id)clientSecret;
+ (id)localizedServiceName;
+ (BOOL)allowsMultipleAccounts;
+ (id)redirectURI;

- (void).cxx_destruct;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
