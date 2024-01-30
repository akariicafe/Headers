@class UIImage, _UILegibilityImageSet, UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _state;
    BOOL _batterySaverModeActive;
    UIView *_accessoryView;
}

@property (retain, nonatomic) _UILegibilityImageSet *cachedImageSet;
@property (nonatomic) int cachedCapacity;
@property (nonatomic) BOOL cachedImageHasAccessoryImage;
@property (nonatomic) unsigned long long cachedBatteryStyle;
@property (nonatomic) int cachedAXHUDCapacity;
@property (nonatomic) unsigned long long cachedAXHUDStyle;
@property (retain, nonatomic) UIImage *cachedAXHUDImage;

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void)_updateAccessoryImage;
- (BOOL)_needsAccessoryImage;
- (id)_contentsImage;
- (struct CGSize { double x0; double x1; })_batteryOffsetWithBackground:(id)a0;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (id)_accessoryImage;
- (id)accessibilityHUDRepresentation;
- (double)legibilityStrength;

@end
