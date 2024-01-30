@class NSLayoutConstraint, HKGradient, HKGradientView;

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKGradientView *backgroundGradientView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) HKGradient *gradient;

+ (id)_titleLabelFont;
+ (double)_pillBackgroundViewHeightConstraint;

- (double)_cornerRadius;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
