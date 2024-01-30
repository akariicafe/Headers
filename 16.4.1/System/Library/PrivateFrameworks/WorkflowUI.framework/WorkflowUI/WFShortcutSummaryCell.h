@class WFRowOfIconsView, UILabel, UIStackView;

@interface WFShortcutSummaryCell : UITableViewCell

@property (retain, nonatomic) WFRowOfIconsView *actionIconsView;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UIStackView *mainStackView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)a0 actionIcons:(id)a1;
- (void)addActionViewIfNeeded;
- (void)removeActionViewIfNeeded;

@end
