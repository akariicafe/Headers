@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell

@property (readonly, nonatomic) UIButton *leftLabel;
@property (readonly, nonatomic) UIButton *rightLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)labelView;
- (void).cxx_destruct;
- (void)_setupButton:(id)a0 forAction:(id)a1;
- (id)constantConstraints;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setCardGroupItem:(id)a0;
- (void)setLabelTextAttributes:(id)a0;
- (id)standardButton;

@end
