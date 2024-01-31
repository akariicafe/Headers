@class NSString, UIViewController, UIView;

@interface _CNCustomActionSheetPresentation : NSObject <UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation>

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)a0;
- (id)presentedViewController;
- (void)prepareForPresentationOfController:(id)a0;

@end
