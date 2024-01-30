@class NSArray, TLKAuxilliaryTextView, SearchUIMultiResultRowModel, SearchUIAppIconsRowView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIAppIconsRowView *topRow;
@property (retain, nonatomic) SearchUIAppIconsRowView *bottomRow;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (retain, nonatomic) TLKAuxilliaryTextView *folderLabelView;
@property (retain, nonatomic) SearchUIMultiResultRowModel *rowModel;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;

- (BOOL)isExpandable;
- (void)returnKeyPressed;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithRowModel:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)deleteIcon:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)visibleResults;
- (void).cxx_destruct;
- (void)updateExpanded:(BOOL)a0;
- (double)appRowVerticalSpacingForTopRowSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canSetupKeyboardHandler;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)keyboardResultForFocus;
- (BOOL)navigateKeyboardDown;
- (BOOL)navigateKeyboardLeft;
- (BOOL)navigateKeyboardRight;
- (BOOL)navigateKeyboardUp;
- (unsigned long long)numberOfVisibleResults;
- (void)removeHighlightedIconState;
- (void)removeKeyboardHandler;
- (void)setupKeyboardHandler;
- (id)viewForHighlightedIndex:(long long)a0;

@end
