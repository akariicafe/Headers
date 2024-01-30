@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
    NSMutableArray *mTransforms;
}

+ (id)basicMapOfColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)rgbColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (float)alphaWithColor:(id)a0;
+ (id)tsuColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)tsuColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)tsuColorWithRgbColor:(id)a0;
+ (int)mapSchemeColorID:(int)a0 colorMap:(id)a1;
+ (id)mapAdjustedColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;

- (id)transforms;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setTransforms:(id)a0;
- (void)addTransform:(id)a0;
- (id)colorForStyleColor:(id)a0;
- (void)addTransformOfType:(int)a0;
- (void)addTransformOfType:(int)a0 value:(float)a1;

@end
