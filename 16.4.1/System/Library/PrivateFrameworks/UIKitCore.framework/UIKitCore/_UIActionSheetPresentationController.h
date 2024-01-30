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
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (void)endPseudoAlertPresentationMode;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)a0;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (id)_compactPresentationController;
- (BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)a0;
- (long long)_presentationContextForViewController:(id)a0;
- (void)dealloc;
- (BOOL)dimmingViewWasTapped:(id)a0 withDismissCompletion:(id /* block */)a1;
- (id)_visualStyleForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)beginPseudoAlertPresentationMode;

@end
