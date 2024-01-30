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

- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_addRemoteView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithParameters:(id)a0;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)_viewTapped:(id)a0;

@end
