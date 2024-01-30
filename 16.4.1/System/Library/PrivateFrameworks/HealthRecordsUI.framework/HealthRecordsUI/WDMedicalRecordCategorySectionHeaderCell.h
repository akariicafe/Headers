@class NSString, HKGradient, UIImage, HKRoundedHeaderView;

@interface WDMedicalRecordCategorySectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKRoundedHeaderView *headerView;
@property (retain, nonatomic) HKGradient *gradient;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
