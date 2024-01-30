@class AKAuthorizationPresentationContext, UIViewController, NSString;
@protocol AKAuthorizationPaneViewControllerDelegate, AKAuthorizationContainerViewControllerDelegate;

@interface AKAuthorizationContainerViewController : UIViewController <UINavigationControllerDelegate>

@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id<AKAuthorizationContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AKAuthorizationPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_clearPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;
- (id)initWithRootViewController:(id)a0 authorizationContext:(id)a1;

@end
