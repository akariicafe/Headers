@class UILabel, NSString;

@interface WDMedicalRecordTimelinePanelTitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (id)titleFont;
- (id)subtitleFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
