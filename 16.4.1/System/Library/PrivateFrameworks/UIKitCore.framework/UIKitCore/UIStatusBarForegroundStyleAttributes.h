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

- (long long)idiom;
- (long long)legibilityStyle;
- (id)imageNamed:(id)a0;
- (double)height;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)scale;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (double)leftEdgePadding;
- (double)standardPadding;
- (id)_batteryColorForCapacity:(int)a0 lowCapacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (void)_cacheImage:(id)a0 named:(id)a1;
- (void)_cacheQueue_cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2 groupFullName:(id)a3 tintColor:(id)a4;
- (id)_cacheQueue_cachedImageNamed:(id)a0 inTempGroup:(id)a1 groupFullName:(id)a2;
- (id)_cachedImageNamed:(id)a0;
- (void)_drawText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withFont:(id)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5;
- (double)_roundDimension:(double)a0;
- (BOOL)_shouldUseBoldFontForStyle:(long long)a0;
- (id)accessibilityHUDImageNamed:(id)a0;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (double)baselineOffsetForStyle:(long long)a0;
- (double)batteryAccessoryMargin;
- (id)batteryColorForCapacity:(int)a0 style:(unsigned long long)a1 usingTintColor:(BOOL)a2;
- (id)bluetoothBatteryColorForCapacity:(double)a0 usingTintColor:(BOOL)a1;
- (double)bluetoothBatteryExtraPadding;
- (id)bluetoothBatteryImageNameWithCapacity:(double)a0;
- (void)cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2;
- (id)cachedImageNamed:(id)a0 inTempGroup:(id)a1;
- (id)cachedImageWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 itemType:(int)a6;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(double)a1;
- (void)drawText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 textSize:(struct CGSize { double x0; double x1; })a6 textHeight:(double)a7;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 withBlock:(id /* block */)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (id)expandedNameForImageName:(id)a0;
- (id)generateUniqueIdentifier;
- (id)imageIdWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 style:(long long)a4;
- (id)imageNamed:(id)a0 withLegibilityStyle:(long long)a1 legibilityStrength:(double)a2;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8 shouldCache:(BOOL)a9;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3 idiom:(long long)a4;
- (id)makeTextFontForStyle:(long long)a0;
- (double)middlePadding;
- (struct CGPoint { double x0; double x1; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)rightEdgePadding;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4 shouldCache:(BOOL)a5;
- (double)shadowPadding;
- (double)sizeForMoonMaskVisible:(BOOL)a0;
- (BOOL)supportsShowingBuildVersion;
- (id)textColorForStyle:(long long)a0;
- (id)textFontForStyle:(long long)a0;
- (id)textForNetworkType:(int)a0;
- (double)textOffsetForStyle:(long long)a0;
- (id)uncachedImageNamed:(id)a0;
- (id)untintedImageNamed:(id)a0;
- (BOOL)usesVerticalLayout;

@end
