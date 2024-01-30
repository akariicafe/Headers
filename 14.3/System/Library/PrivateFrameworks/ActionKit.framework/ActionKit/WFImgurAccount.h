@interface WFImgurAccount : WFOAuth2Account

+ (id)clientID;
+ (id)sessionManager;
+ (id)serviceID;
+ (id)responseType;
+ (id)clientSecret;
+ (id)localizedServiceName;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
