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

- (id)imageNamed:(id)a0;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8 shouldCache:(BOOL)a9;
- (void)drawText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 textSize:(struct CGSize { double x0; double x1; })a6 textHeight:(double)a7;
- (id)cachedImageWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 textAlignment:(long long)a4 style:(long long)a5 itemType:(int)a6;
- (id)imageWithText:(id)a0 ofItemType:(int)a1 forWidth:(double)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5 style:(long long)a6 withLegibilityStyle:(long long)a7 legibilityStrength:(double)a8;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4 shouldCache:(BOOL)a5;
- (double)height;
- (long long)legibilityStyle;
- (id)uniqueIdentifier;
- (id)textForNetworkType:(int)a0;
- (double)leftEdgePadding;
- (BOOL)usesVerticalLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (id)generateUniqueIdentifier;
- (double)standardPadding;
- (double)rightEdgePadding;
- (double)shadowPadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (double)textOffsetForStyle:(long long)a0;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (id)makeTextFontForStyle:(long long)a0;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3 idiom:(long long)a4;
- (id)batteryColorForCapacity:(int)a0 style:(unsigned long long)a1 usingTintColor:(BOOL)a2;
- (id)_batteryColorForCapacity:(int)a0 lowCapacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2 usingTintColor:(BOOL)a3;
- (double)_roundDimension:(double)a0;
- (id)bluetoothBatteryColorForCapacity:(double)a0 usingTintColor:(BOOL)a1;
- (id)textFontForStyle:(long long)a0;
- (id)textColorForStyle:(long long)a0;
- (id)expandedNameForImageName:(id)a0;
- (void)_drawText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withFont:(id)a2 lineBreakMode:(long long)a3 letterSpacing:(double)a4 textAlignment:(long long)a5;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 withBlock:(id /* block */)a2;
- (id)_cacheQueue_cachedImageNamed:(id)a0 inTempGroup:(id)a1 groupFullName:(id)a2;
- (void)cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2;
- (id)_cachedImageNamed:(id)a0;
- (id)uncachedImageNamed:(id)a0;
- (void)_cacheImage:(id)a0 named:(id)a1;
- (double)scale;
- (void)_cacheQueue_cacheImage:(id)a0 named:(id)a1 inTempGroup:(id)a2 groupFullName:(id)a3 tintColor:(id)a4;
- (id)untintedImageNamed:(id)a0;
- (id)cachedImageNamed:(id)a0 inTempGroup:(id)a1;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3;
- (id)shadowImageForImage:(id)a0 withIdentifier:(id)a1 forStyle:(long long)a2 withStrength:(double)a3 inTempGroup:(id)a4;
- (id)imageIdWithText:(id)a0 forWidth:(double)a1 lineBreakMode:(long long)a2 letterSpacing:(double)a3 style:(long long)a4;
- (BOOL)_shouldUseBoldFontForStyle:(long long)a0;
- (double)batteryAccessoryMargin;
- (id)initWithHeight:(double)a0 legibilityStyle:(long long)a1 tintColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(int)a1 style:(unsigned long long)a2;
- (id)accessibilityHUDImageNamed:(id)a0;
- (id)bluetoothBatteryImageNameWithCapacity:(double)a0;
- (double)bluetoothBatteryExtraPadding;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x0; double x1; })a0 capacity:(double)a1;
- (double)baselineOffsetForStyle:(long long)a0;
- (id)imageNamed:(id)a0 withLegibilityStyle:(long long)a1 legibilityStrength:(double)a2;
- (double)sizeForMoonMaskVisible:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsShowingBuildVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)idiom;
- (double)middlePadding;

@end
