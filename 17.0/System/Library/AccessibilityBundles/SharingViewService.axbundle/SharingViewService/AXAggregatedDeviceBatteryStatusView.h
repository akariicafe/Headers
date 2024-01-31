@class NSString;

@interface AXAggregatedDeviceBatteryStatusView : UIAccessibilityAggregateElement {
    NSString *_primaryTitle;
    id _batteryLevelLabel;
    id _chargingImage;
    id _warningImage;
}

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)initWithAccessibilityContainer:(id)a0 representedElements:(id)a1 primaryTitle:(id)a2 batteryLevelLabel:(id)a3 chargingImage:(id)a4 warningImage:(id)a5;

@end
