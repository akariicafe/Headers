@class UILabel, NSMutableArray, NSString;

@interface HKElectrocardiogramBulletedTextView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_setUpUI;
- (void)setDetailTextWithBullets:(id)a0;
- (void)_updateLeadingDetailAttributedTextSize;

@end
