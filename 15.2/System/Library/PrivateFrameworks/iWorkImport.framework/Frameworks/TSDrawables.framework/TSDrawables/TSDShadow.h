@class NSSet, NSShadow, NSString, TSUColor;

@interface TSDShadow : NSObject <TSSPropertyValueArchiving, TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (readonly, nonatomic) NSShadow *NSShadow;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offsetDelta;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double opacity;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) unsigned long long shadowType;
@property (readonly, nonatomic) BOOL isContactShadow;
@property (readonly, nonatomic) BOOL isDropShadow;
@property (readonly, nonatomic) BOOL isCurvedShadow;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) BOOL showForEditingText;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shadowWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 opacity:(double)a3 color:(id)a4 enabled:(BOOL)a5;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (BOOL)canMixWithNilObjects;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(BOOL)a0;
+ (id)defaultShadow;
+ (id)defaultDisabledShadow;
+ (id)contactShadowWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 height:(double)a3 opacity:(double)a4 color:(id)a5 enabled:(BOOL)a6;
+ (id)shadowWithNSShadow:(id)a0;
+ (id)curvedShadowWithOffset:(double)a0 angle:(double)a1 radius:(double)a2 curve:(double)a3 opacity:(double)a4 color:(id)a5 enabled:(BOOL)a6;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (BOOL)automaticallyNotifiesObserversOfTSUColor;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)defaultShadowPresets;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)mixedBaseObjectWithObject:(id)a0;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2 extraOffset:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (double)clampOffset:(double)a0;
- (double)clampRadius:(double)a0;
- (double)clampOpacity:(double)a0;
- (id)newShadowClampedForSwatches;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalAngle:(double)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)i_setColor:(id)a0;
- (void)i_setAngle:(double)a0;
- (void)i_setOffset:(double)a0;
- (void)i_setRadius:(double)a0;
- (void)i_setOpacity:(double)a0;
- (void)i_setEnabled:(BOOL)a0;
- (id)i_initWithOpacity:(double)a0 color:(id)a1 angle:(double)a2 offset:(double)a3 radius:(double)a4 enabled:(BOOL)a5;
- (struct CGImage { } *)i_newEmptyImage;

@end
