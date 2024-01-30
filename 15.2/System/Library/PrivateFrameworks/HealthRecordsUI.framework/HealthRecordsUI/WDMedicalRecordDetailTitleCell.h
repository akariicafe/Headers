@class UILabel, NSString;

@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateSubtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dateSubtitle;

+ (id)_titleLabelFont;
+ (id)_subtitleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (double)_subtitleLabelLastBaselineToBottom;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
