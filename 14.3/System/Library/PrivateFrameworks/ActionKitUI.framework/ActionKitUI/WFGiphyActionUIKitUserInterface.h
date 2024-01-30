@class NSString;

@interface WFGiphyActionUIKitUserInterface : WFActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithQuery:(id)a0 selectMultiple:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)giphyViewControllerDidCancel:(id)a0;
- (void)giphyViewController:(id)a0 didSelectObjects:(id)a1;
- (void)finishWithContent:(id)a0 error:(id)a1;

@end
