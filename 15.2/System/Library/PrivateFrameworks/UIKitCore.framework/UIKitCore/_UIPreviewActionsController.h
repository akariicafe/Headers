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

- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)a0 finalSelectionState:(BOOL)a1;
- (BOOL)platterPanned;
- (struct CGPoint { double x0; double x1; })centerForMenuDismissed;
- (void)_activateFeedbackIfNeeded;
- (void)_configureFeedbackGenerator;
- (void)_deactivateFeedbackIfNeeded;
- (struct CGPoint { double x0; double x1; })centerForPlatterWithMenuViewDismissed;
- (struct CGPoint { double x0; double x1; })centerForPlatterWithMenuViewPresented;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (void)translationDidUpdateForPlatterMenuDynamicsController:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })centerForMenuPresented;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)a0;
- (id)leadingSwipeActionView;
- (id)trailingSwipeActionView;
- (struct CGPoint { double x0; double x1; })initialCenterForLeadingSwipeActionView;
- (struct CGPoint { double x0; double x1; })initialCenterForTrailingSwipeActionView;
- (void)platterMenuDynamicsController:(id)a0 didMoveSwipeView:(id)a1 toPosition:(struct CGPoint { double x0; double x1; })a2;
- (void)setLeadingSwipeActionViewSelected:(BOOL)a0;
- (void)setTrailingSwipeActionViewSelected:(BOOL)a0;
- (void)_actionsControllerCommonInit;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)a0;
- (void)_memoizePreviewActionViews;
- (void)_configurePlatterDynamicsController;
- (BOOL)_hasPreviewSwipeActions;
- (id)initWithContainerView:(id)a0 platterView:(id)a1 presentedViewController:(id)a2 delegate:(id)a3;
- (BOOL)_hasSelectedSwipeAction;
- (void)_dismissForSelectedSwipeAction;
- (void)_hideChromeAndSetAffordanceHidden:(BOOL)a0;
- (void)_setAffordanceAlpha:(double)a0 withDuration:(double)a1 hideOnCompletion:(BOOL)a2;
- (double)_platterOffsetDistance;
- (BOOL)_isSwipeActionVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialPlatterFrame;
- (void)_updateAffordanceIfNecessary;
- (struct CGPoint { double x0; double x1; })_centerForMenuDismissedForActionSheet:(id)a0;
- (void)_presentSubactionsForActionGroup:(id)a0;
- (double)_quickActionSelectionOffset;
- (void)_disablePlatterController;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)a0;
- (BOOL)_previewActionsSheetIsVisible;
- (struct CGPoint { double x0; double x1; })_centerForPlatterWithMenuViewPresentedForActionSheet:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerForMenuPresentedForActionSheet:(id)a0;
- (void)_updateSwipeActionsState;
- (BOOL)_platterIsInInitialPositionMostly;
- (void)beginPanningAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_applyLayoutAdjustmentsForManagedViewWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePanningLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)endPanningAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)flashScrollAffordance;
- (void)dismissPreviewActionsWithCompletion:(id /* block */)a0;
- (void)_dismissWithAction:(id)a0;
- (BOOL)_shouldDismiss;
- (void)dealloc;

@end
