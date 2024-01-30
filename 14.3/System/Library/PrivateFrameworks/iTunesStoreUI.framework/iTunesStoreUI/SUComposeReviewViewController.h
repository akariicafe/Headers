@class NSURL, NSString, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {
    SKComposeReviewViewController *_remoteViewController;
}

@property (readonly, nonatomic) NSURL *compositionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id /* block */)a0;
- (void)reviewComposeViewControllerDidFinish:(id)a0;
- (id)initWithCompositionURL:(id)a0;
- (id)copyScriptViewController;
- (void)_showRemoteView;

@end
