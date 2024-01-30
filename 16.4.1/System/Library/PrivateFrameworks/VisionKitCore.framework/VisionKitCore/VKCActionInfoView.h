@class VKCActionInfoButton, VKCVisualSearchCornerView, NSArray, UIView, VKImageAnalysisButton, VKCActionInfoViewLayoutContext;

@interface VKCActionInfoView : VKPlatformView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *textButtonContainer;
@property (retain, nonatomic) UIView *visualSearchContainer;
@property (retain, nonatomic) UIView *moreButtonContainer;
@property (retain, nonatomic) VKImageAnalysisButton *liveTextButton;
@property (retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerView;
@property (retain, nonatomic) VKCActionInfoButton *moreButton;
@property (retain, nonatomic) VKCActionInfoViewLayoutContext *layoutContext;
@property (readonly, nonatomic) NSArray *allViews;
@property (nonatomic) BOOL _quickActionsHidden;
@property (nonatomic) BOOL automaticVisualRectLayoutDisabled;
@property (nonatomic) BOOL alignQuickActionsWithVerticalCenter;
@property (nonatomic) double preferredQuickActionButtonHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleImageRect;
@property (nonatomic) BOOL wantsTranslucentActionInfoButtons;
@property (copy, nonatomic) id /* block */ quickActionConfigurationUpdateHandler;
@property (nonatomic) BOOL isShowingSingleTapMoreButtonMenu;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleRect;
@property (copy, nonatomic) NSArray *quickActions;
@property (nonatomic) BOOL quickActionsDisabled;
@property (nonatomic) BOOL liveTextButtonDisabled;
@property (nonatomic) BOOL visualSearchCornerViewDisabled;
@property (nonatomic) BOOL layoutUpdatesSuspended;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) BOOL shouldAnimateQuickActionVisibilityChanges;

- (void)updateLayoutIfNecessary;
- (struct CGSize { double x0; double x1; })sizeForView:(id)a0 scale:(double)a1;
- (id)createContainerForView:(id)a0;
- (void)_applyConfigurationUpdateHandlerToQuickActions;
- (void)updateMoreButtonMenuForContext:(id)a0;
- (void)adjustContextToFitWidth:(id)a0;
- (void)showMoreButtonMenu:(id)a0;
- (id)initWithLiveTextButton:(id)a0 cornerView:(id)a1;
- (BOOL)containsInteractableItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateFramesForContext:(id)a0;
- (void)setHidden:(BOOL)a0;
- (id)buildMoreButtonMenuFromQuickActions:(id)a0 moreButton:(id)a1;
- (void)layoutContainerView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)processView:(id)a0 hasContent:(BOOL)a1 isLeading:(BOOL)a2 layoutContext:(id)a3;
- (void)traitCollectionDidChange:(id)a0;
- (id)configureView:(id)a0 isLeading:(BOOL)a1 container:(id)a2 layoutContext:(id)a3;
- (BOOL)isInteractableView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
