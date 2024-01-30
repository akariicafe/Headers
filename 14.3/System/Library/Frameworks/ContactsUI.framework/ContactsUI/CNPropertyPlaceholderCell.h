@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell

@property (retain, nonatomic) UILabel *label;

+ (BOOL)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)labelView;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)a0;

@end
