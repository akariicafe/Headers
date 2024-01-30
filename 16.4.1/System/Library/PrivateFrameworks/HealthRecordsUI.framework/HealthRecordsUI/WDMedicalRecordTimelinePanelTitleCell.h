@class UILabel, NSString;

@interface WDMedicalRecordTimelinePanelTitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)titleFont;
- (id)subtitleFont;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
