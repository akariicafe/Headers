@class NSString, UIImageView, UIImage, UILabel;

@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *disclosureChevronView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) UIImage *titleImage;

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
