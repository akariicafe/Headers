@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell

@property (readonly, nonatomic) UIButton *leftLabel;
@property (readonly, nonatomic) UIButton *rightLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setLabelTextAttributes:(id)a0;
- (void)setCardGroupItem:(id)a0;
- (id)standardButton;
- (id)constantConstraints;
- (void)_setupButton:(id)a0 forAction:(id)a1;

@end
