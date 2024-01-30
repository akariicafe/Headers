@class HKDynamicButton;

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKDynamicButton *reconnectButton;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)setUpConstraints;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;

@end
