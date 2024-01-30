@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
    NSMutableArray *mTransforms;
}

+ (id)tsuColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)basicMapOfColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)rgbColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (float)alphaWithColor:(id)a0;
+ (id)tsuColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)tsuColorWithRgbColor:(id)a0;
+ (int)mapSchemeColorID:(int)a0 colorMap:(id)a1;
+ (id)mapAdjustedColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;

- (id)transforms;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setTransforms:(id)a0;
- (void)addTransform:(id)a0;
- (id)colorForStyleColor:(id)a0;
- (void)addTransformOfType:(int)a0;
- (void)addTransformOfType:(int)a0 value:(float)a1;

@end
