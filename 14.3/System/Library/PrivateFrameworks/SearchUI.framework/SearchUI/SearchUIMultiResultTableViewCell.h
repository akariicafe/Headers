@class SearchUIAppIconsRowView, NSArray, TLKAuxilliaryTextView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIAppIconsRowView *topRow;
@property (retain, nonatomic) SearchUIAppIconsRowView *bottomRow;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (retain, nonatomic) TLKAuxilliaryTextView *folderLabelView;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;

- (BOOL)isExpandable;
- (double)appRowVerticalSpacingForTopRowSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canSetupKeyboardHandler;
- (void)updateWithRowModel:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateExpanded:(BOOL)a0;
- (void)removeKeyboardHandler;
- (unsigned long long)numberOfVisibleResults;
- (void)setupKeyboardHandler;
- (id)keyboardResultForFocus;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeHighlightedIconState;
- (void)layoutSubviews;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (BOOL)navigateKeyboardDown;
- (id)visibleResults;
- (BOOL)navigateKeyboardRight;
- (BOOL)navigateKeyboardLeft;
- (void)returnKeyPressed;
- (id)viewForHighlightedIndex:(long long)a0;
- (BOOL)navigateKeyboardUp;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
