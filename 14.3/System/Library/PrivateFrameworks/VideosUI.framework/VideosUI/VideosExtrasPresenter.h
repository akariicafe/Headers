@class NSString, VideosExtrasContext;

@interface VideosExtrasPresenter : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) VideosExtrasContext *extrasContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extrasMenuBarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithExtrasContext:(id)a0 extrasMenuBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)presentExtrasWith:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissExtrasAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
