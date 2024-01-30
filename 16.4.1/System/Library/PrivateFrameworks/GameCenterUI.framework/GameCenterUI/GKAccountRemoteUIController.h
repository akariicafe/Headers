@class NSArray, NSURL, NSDictionary;

@interface GKAccountRemoteUIController : GKRemoteUIController

@property (retain, nonatomic) NSArray *availableExternalServices;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL authenticatePlayerOnCompletion;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *postBody;

+ (void)accountRemoteUIControllerForPlayer:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)accountRemoteUIControllerForPlayer:(id)a0 mode:(long long)a1 url:(id)a2 postBody:(id)a3 completionHandler:(id /* block */)a4;

- (id)fallbackURL;
- (id)bagKey;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)fireCompletionHandler;
- (id)initWithMode:(long long)a0 player:(id)a1;
- (id)postBodyForInitialLoad;
- (void)takeValuesFromClientInfo:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updatePostbackDictionary:(id)a0 withHandler:(id /* block */)a1;

@end
