@class NSString, UIViewController;
@protocol CompletionDetailViewControllerDelegate;

@interface CompletionDetailViewController : UINavigationController <UIAdaptivePresentationControllerDelegate> {
    UIViewController *_currentStoreSheet;
}

@property (weak, nonatomic) id<CompletionDetailViewControllerDelegate> completionDetailViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)_didDismissCompletionDetailSheet;
- (void)_dismissCompletionDetailSheet;
- (void)_willDismissCompletionDetailSheet;

@end
