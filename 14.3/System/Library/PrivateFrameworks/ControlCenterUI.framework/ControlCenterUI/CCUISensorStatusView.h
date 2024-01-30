@class CCUISensorStatusButton;

@interface CCUISensorStatusView : UIView

@property (retain, nonatomic) CCUISensorStatusButton *cameraSensorStatusButton;
@property (retain, nonatomic) CCUISensorStatusButton *micSensorStatusButton;
@property (nonatomic, getter=isDisplayingSensorStatus) BOOL displayingSensorStatus;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void).cxx_destruct;
- (void)_openPreferencesForBundleIdentifier:(id)a0;
- (void)layoutSubviews;
- (void)_handleSensorStatusButtonTap:(id)a0;
- (void)configureStatusForSensorType:(unsigned long long)a0 sensorActivityData:(id)a1;
- (void)resetStatusForSensorType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
