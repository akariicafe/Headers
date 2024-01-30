@class NSString;

@interface WFShowWebPageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)showURL:(id)a0 readerView:(BOOL)a1 completion:(id /* block */)a2;
- (void)showRichText:(id)a0 completion:(id /* block */)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)webViewControllerDidFinish:(id)a0;

@end
