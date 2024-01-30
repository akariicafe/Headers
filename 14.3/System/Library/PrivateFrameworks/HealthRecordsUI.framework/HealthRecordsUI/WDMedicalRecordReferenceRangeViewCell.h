@class NSString, HKReferenceRangeView, UILabel, HKInspectableValueInRange;

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKReferenceRangeView *referenceRangeView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) HKInspectableValueInRange *valueInRange;
@property (copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
