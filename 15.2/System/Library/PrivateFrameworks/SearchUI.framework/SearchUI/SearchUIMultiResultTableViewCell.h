@class NSArray, TLKAuxilliaryTextView, SearchUIMultiResultRowModel, SearchUIAppIconsRowView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIAppIconsRowView *topRow;
@property (retain, nonatomic) SearchUIAppIconsRowView *bottomRow;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (retain, nonatomic) TLKAuxilliaryTextView *folderLabelView;
@property (retain, nonatomic) SearchUIMultiResultRowModel *rowModel;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;

- (void)returnKeyPressed;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isExpandable;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)deleteIcon:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)visibleResults;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)removeKeyboardHandler;
- (BOOL)canSetupKeyboardHandler;
- (void)setupKeyboardHandler;
- (BOOL)navigateKeyboardRight;
- (BOOL)navigateKeyboardLeft;
- (BOOL)navigateKeyboardUp;
- (BOOL)navigateKeyboardDown;
- (id)keyboardResultForFocus;
- (void)updateExpanded:(BOOL)a0;
- (unsigned long long)numberOfVisibleResults;
- (double)appRowVerticalSpacingForTopRowSize:(struct CGSize { double x0; double x1; })a0;
- (void)removeHighlightedIconState;
- (id)viewForHighlightedIndex:(long long)a0;

@end
