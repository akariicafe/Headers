@class SearchUIRowModel, NSArray, SearchUIDragSource, NSString, UIView;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol>

@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) UIView *platterView;
@property (nonatomic) BOOL isExpanded;
@property (readonly) BOOL shouldDrawBackgroundColor;
@property (weak, nonatomic) id<SearchUIFeedbackDelegateInternal> delegate;
@property (retain, nonatomic) UIView *sizingContainer;
@property (retain, nonatomic) SearchUIDragSource *dragSource;
@property (readonly) NSArray *visibleResults;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (nonatomic) int sfSeparatorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellViewForRowModel:(id)a0 feedbackDelegate:(id)a1;
+ (id)reuseIdentifierForResult:(id)a0;
+ (BOOL)canCellExpandWithResults:(id)a0 forView:(id)a1;
+ (double)distanceToTopOfAppIconsForMultiResultCell;

- (BOOL)isExpandable;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (BOOL)canSetupKeyboardHandler;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)updateExpanded:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void)removeKeyboardHandler;
- (void)_updateHighlightColorsForView:(id)a0 highlighted:(BOOL)a1;
- (void)_setAnimating:(BOOL)a0 clippingAdjacentCells:(BOOL)a1;
- (void)_setSeparatorDrawsInVibrantLightMode:(BOOL)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)a0;
- (void)setupKeyboardHandler;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)keyboardResultForFocus;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (BOOL)navigateKeyboardDown;
- (BOOL)navigateKeyboardRight;
- (void)tabKeyPressed;
- (id)keyboardCardSectionForFocus;
- (void)updateWithResults:(id)a0;
- (BOOL)supportsRecycling;
- (BOOL)navigateKeyboardLeft;
- (void)returnKeyPressed;
- (void)updateWithResult:(id)a0;
- (BOOL)navigateKeyboardUp;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
