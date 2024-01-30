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
- (void)setHeaderType:(long long)a0;
- (void)_updateForCurrentSizeCategory;
- (id)_titleLabelFont;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setupUI;
- (double)_titleLabelTopToFirstBaseline;
- (double)_titleLabelLastBaselineToBottom;
- (id)initWithHeaderType:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLastBaselineToBottomDistance:(double)a0;

@end
