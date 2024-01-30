@class UIColor, NSMutableDictionary, NSString;

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying> {
    double _height;
    long long _legibilityStyle;
    long long _idiom;
    NSMutableDictionary *_cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    NSString *_cachedUniqueIdentifier;
}

@property (nonatomic) BOOL canShowBreadcrumbs;
@property (readonly, retain, nonatomic) UIColor *tintColor;

- (double)scale;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4 shouldCache:(BOOL)a5;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8 shouldCache:(BOOL)a9;
- (void)drawText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 textSize:(struct CGSize { double x0; double x1; })a6 textHeight:(double)a7;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8;
- (id)cachedImageWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 itemType:(int)a6;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(double)a1;
- (double)baselineOffsetForStyle:(long long)a0;
- (id)imageNamed:(id)a0 withLegibilityStyle:(long long)a1 legibilityStrength:(double)a2;
- (double)bluetoothBatteryExtraPadding;
- (double)sizeForMoonMaskVisible:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsShowingBuildVersion;
- (id)imageNamed:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)legibilityStyle;
- (id)uniqueIdentifier;
- (double)height;
- (long long)idiom;
- (double)middlePadding;
- (id)generateUniqueIdentifier;
- (double)standardPadding;
- (id)textForNetworkType:(int)a0;
- (BOOL)usesVerticalLayout;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (id)makeTextFontForStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (id)textColorForStyle:(long long)a0;
- (double)shadowPadding;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (double)textOffsetForStyle:(long long)a0;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3 idiom:(long long)a4;
- (id)_batteryColorForCapacity:(int)a0 lowCapacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (id)batteryColorForCapacity:(int)a0 style:(unsigned long long)a1 usingTintColor:(BOOL)a2;
- (double)_roundDimension:(double)a0;
- (id)bluetoothBatteryColorForCapacity:(double)a0 usingTintColor:(BOOL)a1;
- (id)textFontForStyle:(long long)a0;
- (void)_drawText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withFont:(id)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 withBlock:(id /* block */)a2;
- (id)expandedNameForImageName:(id)a0;
- (id)_cacheQueue_cachedImageNamed:(id)a0 inTempGroup:(id)a1 groupFullName:(id)a2;
- (void)cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2;
- (id)_cachedImageNamed:(id)a0;
- (void)_cacheQueue_cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2 groupFullName:(id)a3 tintColor:(id)a4;
- (id)uncachedImageNamed:(id)a0;
- (void)_cacheImage:(id)a0 named:(id)a1;
- (id)untintedImageNamed:(id)a0;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4;
- (id)cachedImageNamed:(id)a0 inTempGroup:(id)a1;
- (BOOL)_shouldUseBoldFontForStyle:(long long)a0;
- (id)imageIdWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 style:(long long)a4;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (double)batteryAccessoryMargin;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2;
- (id)bluetoothBatteryImageNameWithCapacity:(double)a0;
- (id)accessibilityHUDImageNamed:(id)a0;

@end
