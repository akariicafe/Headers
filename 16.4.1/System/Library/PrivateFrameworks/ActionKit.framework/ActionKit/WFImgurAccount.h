@interface WFImgurAccount : WFOAuth2Account

+ (id)clientID;
+ (id)sessionManager;
+ (id)serviceID;
+ (id)responseType;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
