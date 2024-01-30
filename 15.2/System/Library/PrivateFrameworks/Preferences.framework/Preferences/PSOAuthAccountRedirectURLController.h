@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject

@property (retain, nonatomic) NSMapTable *redirectHandlerMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_redirectURLFromURL:(id)a0;
- (void)registerOAuthClientForRedirectURL:(id)a0 redirectHandler:(id /* block */)a1;
- (BOOL)handleOAuthRedirectURL:(id)a0;
- (void)unRegisterOAuthClientForRedirectURL:(id)a0;

@end
