@class NSString, TSUColor;

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offsetDelta;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) TSUColor *TSUColor;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)shadowWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 opacity:(double)a3 color:(struct CGColor { } *)a4 enabled:(BOOL)a5;
+ (BOOL)automaticallyNotifiesObserversOfTSUColor;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
+ (BOOL)canMixWithNilObjects;
+ (id)contactShadowWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 height:(double)a3 opacity:(double)a4 color:(struct CGColor { } *)a5 enabled:(BOOL)a6;
+ (id)curvedShadowWithOffset:(double)a0 angle:(double)a1 radius:(double)a2 curve:(double)a3 opacity:(double)a4 color:(struct CGColor { } *)a5 enabled:(BOOL)a6;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(BOOL)a0;
+ (id)presetKinds;
+ (id)shadowWithNSShadow:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)typeDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopy;
- (unsigned long long)shadowType;
- (id)NSShadow;
- (BOOL)isContactShadow;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2 extraOffset:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (double)clampOffset:(double)a0;
- (double)clampOpacity:(double)a0;
- (double)clampRadius:(double)a0;
- (BOOL)differenceRequiresRebuilding:(id)a0;
- (id)i_initWithOpacity:(double)a0 color:(struct CGColor { } *)a1 enabled:(BOOL)a2;
- (struct CGImage { } *)i_newEmptyImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isCurvedShadow;
- (BOOL)isDropShadow;
- (BOOL)isThemeEquivalent:(id)a0;
- (SEL)mapThemeAssetSelector;
- (id)mixedBaseObjectWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)newShadowClampedForSwatches;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalAngle:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)showForEditingText;

@end
