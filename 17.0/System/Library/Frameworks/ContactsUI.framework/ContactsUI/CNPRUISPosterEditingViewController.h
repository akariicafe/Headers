@class NSString, PRUISPosterEditingViewController;
@protocol CNPRUISPosterEditingViewControllerDelegate;

@interface CNPRUISPosterEditingViewController : UIViewController <PRUISPosterEditingViewControllerDelegate> {
    PRUISPosterEditingViewController *_wrappedPosterEditingViewController;
}

@property (weak, nonatomic) id<CNPRUISPosterEditingViewControllerDelegate> delegate;
@property (nonatomic) BOOL showsContentWhenReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)editingViewController:(id)a0 didFinishWithConfiguration:(id)a1;
- (void)editingViewControllerDidFinishShowingContent:(id)a0;
- (id)initWithExistingConfiguration:(id)a0 context:(id)a1;
- (id)initWithExtensionIdentifier:(id)a0 configuration:(id)a1 context:(id)a2;
- (void)presentationDidFinishAnimated:(BOOL)a0;

@end
