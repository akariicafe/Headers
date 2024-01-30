@class NSArray, OADShade, OADRelativeRect;

@interface OADGradientFill : OADFill {
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)a0;

- (id)stops;
- (id)initWithDefaults;
- (void)setParent:(id)a0;
- (id)shade;
- (void)setStops:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setFlipMode:(int)a0;
- (void)setTileRect:(id)a0;
- (void)setShade:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)usesPlaceholderColor;
- (BOOL)areStopsOverridden;
- (BOOL)isTileRectOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isShadeOverridden;
- (id)tileRect;
- (int)flipMode;
- (BOOL)rotateWithShape;
- (void)sortStops;
- (id)firstStop;
- (id)lastStop;

@end
