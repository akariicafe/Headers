@class SKInvocationQueueProxy, NSString, _UIAsyncInvocation, NSDictionary, _SKStoreProductActivityAnimationController, SKRemoteProductActivityViewController;
@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    _SKStoreProductActivityAnimationController *_animationController;
}

@property (weak, nonatomic) id<SKStoreProductActivityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addRemoteView;
- (id)animationControllerForDismissedController:(id)a0;
- (void)_requestRemoteViewController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)_didFinishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)_viewTapped:(id)a0;

@end
