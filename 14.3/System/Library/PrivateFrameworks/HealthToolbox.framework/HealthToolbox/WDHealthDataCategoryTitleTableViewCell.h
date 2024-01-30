@class NSString, UILabel, NSLayoutConstraint;

@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    long long _headerType;
    double _lastBaselineToBottomDistance;
}

@property (copy, nonatomic) NSString *titleText;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)setHeaderType:(long long)a0;
- (void)_setupUI;
- (id)initWithCoder:(id)a0;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (double)_titleLabelTopToFirstBaseline;
- (double)_titleLabelLastBaselineToBottom;
- (id)initWithHeaderType:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLastBaselineToBottomDistance:(double)a0;

@end
