@class UILabel, NSString;

@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateSubtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dateSubtitle;

+ (id)_titleLabelFont;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (double)_subtitleLabelLastBaselineToBottom;
+ (id)_subtitleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
