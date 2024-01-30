@class NSString, UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)_updateTextColor;
- (void)setUpConstraints;

@end
