@class _UIWaitingForRemoteViewContainerViewController, NSExtension, UIViewController;
@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) UIViewController *containedViewController;
@property (retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController;
@property (retain, nonatomic) UIViewController *errorViewController;
@property (nonatomic) BOOL delayingDisplayOfRemoteView;
@property (readonly, nonatomic) UIViewController *remoteViewController;

+ (id)instantiateWithExtension:(id)a0 completion:(id /* block */)a1;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultInitialViewFrame;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_displayError:(id)a0;
- (void)_displayRemoteViewController;
- (void)delayDisplayOfRemoteController;
- (void)endDelayingDisplayOfRemoteController;
- (id)initWithExtension:(id)a0 completion:(id /* block */)a1;

@end
