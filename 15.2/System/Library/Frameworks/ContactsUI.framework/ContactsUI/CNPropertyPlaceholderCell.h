@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell

@property (retain, nonatomic) UILabel *label;

+ (BOOL)shouldIndentWhileEditing;

- (id)labelView;
- (void).cxx_destruct;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)a0;

@end
