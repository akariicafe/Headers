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

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void)_updateAccessoryImage;
- (BOOL)_needsAccessoryImage;
- (id)_accessoryImage;
- (struct CGSize { double x0; double x1; })_batteryOffsetWithBackground:(id)a0;
- (double)extraRightPadding;
- (id)_contentsImage;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (double)legibilityStrength;
- (id)contentsImage;

@end
