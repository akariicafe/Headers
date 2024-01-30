@class UILabel, NSString;

@interface WDMedicalRecordSectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

+ (id)_titleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (double)_titleLabelLastBaselineToBottom;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
