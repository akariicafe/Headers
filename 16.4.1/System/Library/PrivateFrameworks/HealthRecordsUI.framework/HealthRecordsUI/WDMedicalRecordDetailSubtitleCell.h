@class UILabel, NSString;

@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)_subtitleLabelFont;
+ (id)_titleLabelFont;
+ (double)_subtitleLabelLastBaselineToBottom;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
