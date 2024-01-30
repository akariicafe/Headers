@class NSString, UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)setupSubviews;
- (void)setUpConstraints;

@end
