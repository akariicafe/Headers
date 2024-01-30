@class NSString, WFFileRepresentation;

@interface WFShowWebPageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) WFFileRepresentation *richTextFile;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)finishWithError:(id)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)safariViewControllerWillOpenInBrowser:(id)a0;
- (void)showRichText:(id)a0 completion:(id /* block */)a1;
- (void)showURL:(id)a0 readerView:(BOOL)a1 completion:(id /* block */)a2;
- (void)webViewControllerDidFinish:(id)a0;

@end
