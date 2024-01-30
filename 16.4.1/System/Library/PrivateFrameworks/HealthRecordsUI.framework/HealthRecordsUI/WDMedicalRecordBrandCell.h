@class UILabel;

@interface WDMedicalRecordBrandCell : WDMedicalRecordBrandLogoCell

@property (readonly, nonatomic) UILabel *brandTitleLabel;
@property (readonly, nonatomic) UILabel *brandSubtitleLabel;
@property (readonly, nonatomic) UILabel *brandDetailLabel;

- (void)_updateLabelVisibility;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;

@end
