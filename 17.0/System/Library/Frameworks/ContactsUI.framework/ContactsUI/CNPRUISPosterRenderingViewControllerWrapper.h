@class PRUISPosterRenderingViewController, UIView;

@interface CNPRUISPosterRenderingViewControllerWrapper : NSObject {
    PRUISPosterRenderingViewController *_wrappedPosterRenderingViewController;
}

@property (readonly, nonatomic) UIView *obscurableContentView;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 context:(id)a1;
- (void)registerLabel:(id)a0;
- (void)snapshotWithCompletionBlock:(id /* block */)a0;

@end
