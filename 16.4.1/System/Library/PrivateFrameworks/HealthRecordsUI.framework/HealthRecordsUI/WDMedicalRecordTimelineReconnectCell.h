@class HKDynamicButton;

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKDynamicButton *reconnectButton;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setUpConstraints;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)_updateForContentSizeCategory:(id)a0;

@end
