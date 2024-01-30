@class UILabel, NSString;

@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)_titleLabelFont;
+ (id)_subtitleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (double)_subtitleLabelLastBaselineToBottom;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
