@class _UIActionSheetCompactPresentationController, NSString;
@protocol UIActionSheetPresentationControllerDelegate;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate>

@property (retain, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController;
@property (nonatomic) BOOL avoidsKeyboardDisabled;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (nonatomic, setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:) BOOL _shouldUseCompactPresentationControllerWhenPresentedInSheet;
@property (weak, nonatomic) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)a0;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)a0;
- (BOOL)dimmingViewWasTapped:(id)a0 withDismissCompletion:(id /* block */)a1;
- (id)_compactPresentationController;
- (void).cxx_destruct;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;
- (id)_visualStyleForTraitCollection:(id)a0;
- (long long)_presentationContextForViewController:(id)a0;
- (void)dealloc;

@end
