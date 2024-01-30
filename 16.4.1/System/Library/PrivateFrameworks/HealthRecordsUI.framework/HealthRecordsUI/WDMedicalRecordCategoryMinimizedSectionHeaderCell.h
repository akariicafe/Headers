@class NSLayoutConstraint, HKGradient, HKGradientView;

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKGradientView *backgroundGradientView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) HKGradient *gradient;

+ (id)_titleLabelFont;
+ (double)_pillBackgroundViewHeightConstraint;

- (void)_updateForCurrentSizeCategory;
- (double)_cornerRadius;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
