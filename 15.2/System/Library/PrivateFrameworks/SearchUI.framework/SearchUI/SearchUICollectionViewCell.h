@class SearchUIRowModel, NSArray, SearchUIDragSource, UIView, UIViewController;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUICollectionViewCell : UICollectionViewListCell

@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *dummyBackgroundView;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) SearchUIDragSource *dragSource;
@property (readonly, nonatomic) UIView *sizingView;
@property (weak, nonatomic) id<SearchUIFeedbackDelegateInternal> delegate;
@property (nonatomic) long long sectionBackgroundSyle;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (nonatomic) int sfSeparatorStyle;
@property (readonly) NSArray *visibleResults;
@property (readonly) UIViewController *embeddedViewController;
@property (readonly) UIView *viewForForcedFocus;

- (void)returnKeyPressed;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (long long)_focusItemDeferralMode;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)isExpandable;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupManualFocus;
- (BOOL)_appliesLayoutAttributesMaskingToReusableView;
- (BOOL)needsInternalFocus;
- (void)tlk_updateForAppearance:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateWithRowModel:(id)a0;
- (void)updateExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (BOOL)_disableRasterizeInAnimations;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)removeManualFocus;
- (id)_focusEffectStyle;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
