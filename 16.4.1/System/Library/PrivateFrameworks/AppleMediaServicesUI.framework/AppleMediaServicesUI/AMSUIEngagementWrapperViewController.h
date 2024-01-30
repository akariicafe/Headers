@class NSString, UIViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController <UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)_setup;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)_setupContentSize;

@end
