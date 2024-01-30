@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _accessibilityCachedHUDCapacity;
    UIImage *_accessibilityCachedHUDImage;
}

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)_normalizedCapacity;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityHUDBatteryInsidesInsets;
- (double)extraLeftPadding;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;

@end
