@class NSString, UILabel, NSMutableArray, NSLayoutConstraint;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *detailLabelLastBaselineConstraint;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setDetailTextWithBullets:(id)a0;
- (void)_updateLeadingDetailAttributedTextSize;

@end
