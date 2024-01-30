@interface WFImgurAccount : WFOAuth2Account

+ (id)serviceID;
+ (id)sessionManager;
+ (id)clientID;
+ (id)responseType;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
