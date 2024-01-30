@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _accessibilityCachedHUDCapacity;
    UIImage *_accessibilityCachedHUDImage;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityHUDBatteryInsidesInsets;
- (double)_normalizedCapacity;
- (double)extraLeftPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
