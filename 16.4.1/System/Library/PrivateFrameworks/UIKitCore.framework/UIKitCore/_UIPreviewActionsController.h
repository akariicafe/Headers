@class UIView, _UIPreviewActionSheetView, NSArray, _UIPreviewQuickActionView, _UIStatesFeedbackGenerator, UIImageView, UIPreviewAction, _UIPlatterMenuDynamicsController, NSString, UIViewController;
@protocol _UIPreviewActionsControllerDelegate;

@interface _UIPreviewActionsController : NSObject <_UIPlatterMenuDynamicsControllerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *affordanceView;
@property (retain, nonatomic) UIImageView *affordanceImageView;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) id<_UIPreviewActionsControllerDelegate> delegate;
@property (nonatomic) BOOL hasBegun;
@property (retain, nonatomic) _UIPlatterMenuDynamicsController *platterDynamicsController;
@property (retain, nonatomic) _UIPreviewActionSheetView *previewActionsView;
@property (copy, nonatomic) NSArray *currentPreviewActionItems;
@property (retain, nonatomic) UIPreviewAction *leadingPreviewAction;
@property (retain, nonatomic) UIPreviewAction *trailingPreviewAction;
@property (retain, nonatomic) _UIPreviewQuickActionView *leadingPreviewActionView;
@property (retain, nonatomic) _UIPreviewQuickActionView *trailingPreviewActionView;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanningLocation;
@property (nonatomic) struct CGSize { double width; double height; } totalPanningTranslation;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForActionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsControllerWithContainerView:(id)a0 platterView:(id)a1 presentedViewController:(id)a2 delegate:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_actionsControllerCommonInit;
- (void)_activateFeedbackIfNeeded;
- (struct CGPoint { double x0; double x1; })_applyLayoutAdjustmentsForManagedViewWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_centerForMenuDismissedForActionSheet:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerForMenuPresentedForActionSheet:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerForPlatterWithMenuViewPresentedForActionSheet:(id)a0;
- (void)_configureFeedbackGenerator;
- (void)_configurePlatterDynamicsController;
- (void)_deactivateFeedbackIfNeeded;
- (void)_disablePlatterController;
- (void)_dismissForSelectedSwipeAction;
- (void)_dismissWithAction:(id)a0;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)a0 finalSelectionState:(BOOL)a1;
- (BOOL)_hasPreviewSwipeActions;
- (BOOL)_hasSelectedSwipeAction;
- (void)_hideChromeAndSetAffordanceHidden:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialPlatterFrame;
- (BOOL)_isSwipeActionVisible;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)a0;
- (void)_memoizePreviewActionViews;
- (BOOL)_platterIsInInitialPositionMostly;
- (double)_platterOffsetDistance;
- (void)_presentSubactionsForActionGroup:(id)a0;
- (BOOL)_previewActionsSheetIsVisible;
- (double)_quickActionSelectionOffset;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)a0;
- (void)_setAffordanceAlpha:(double)a0 withDuration:(double)a1 hideOnCompletion:(BOOL)a2;
- (BOOL)_shouldDismiss;
- (void)_updateAffordanceIfNecessary;
- (void)_updateSwipeActionsState;
- (void)beginPanningAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })centerForMenuDismissed;
- (struct CGPoint { double x0; double x1; })centerForMenuPresented;
- (struct CGPoint { double x0; double x1; })centerForPlatterWithMenuViewDismissed;
- (struct CGPoint { double x0; double x1; })centerForPlatterWithMenuViewPresented;
- (void)dismissPreviewActionsWithCompletion:(id /* block */)a0;
- (void)endPanningAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)flashScrollAffordance;
- (id)initWithContainerView:(id)a0 platterView:(id)a1 presentedViewController:(id)a2 delegate:(id)a3;
- (struct CGPoint { double x0; double x1; })initialCenterForLeadingSwipeActionView;
- (struct CGPoint { double x0; double x1; })initialCenterForTrailingSwipeActionView;
- (id)leadingSwipeActionView;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (void)platterMenuDynamicsController:(id)a0 didMoveSwipeView:(id)a1 toPosition:(struct CGPoint { double x0; double x1; })a2;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)a0;
- (BOOL)platterPanned;
- (void)setLeadingSwipeActionViewSelected:(BOOL)a0;
- (void)setTrailingSwipeActionViewSelected:(BOOL)a0;
- (id)trailingSwipeActionView;
- (void)translationDidUpdateForPlatterMenuDynamicsController:(id)a0;
- (void)updatePanningLocation:(struct CGPoint { double x0; double x1; })a0;

@end
