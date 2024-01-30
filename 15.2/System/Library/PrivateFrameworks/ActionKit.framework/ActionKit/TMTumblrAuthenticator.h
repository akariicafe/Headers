@class NSString;

@interface TMTumblrAuthenticator : NSObject

@property (copy, nonatomic) id /* block */ threeLeggedOAuthCallback;
@property (copy, nonatomic) NSString *threeLeggedOAuthTokenSecret;
@property (copy, nonatomic) NSString *OAuthConsumerKey;
@property (copy, nonatomic) NSString *OAuthConsumerSecret;

+ (id)sharedInstance;
+ (void)signRequest:(id)a0 withParameters:(id)a1 consumerKey:(id)a2 consumerSecret:(id)a3 token:(id)a4 tokenSecret:(id)a5;

- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;
- (void)authenticate:(id)a0 urlBlock:(id /* block */)a1 callback:(id /* block */)a2;
- (void)xAuth:(id)a0 password:(id)a1 callback:(id /* block */)a2;

@end
