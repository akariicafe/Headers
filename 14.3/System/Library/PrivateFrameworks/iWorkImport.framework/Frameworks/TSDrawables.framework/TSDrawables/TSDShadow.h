@class NSString, TSUColor;

@interface TSDShadow : NSObject <TSSPropertyValueArchiving, TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offsetDelta;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double opacity;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)shadowWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 opacity:(double)a3 color:(id)a4 enabled:(BOOL)a5;
+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
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
+ (id)instanceWithArchive:(const struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 unarchiver:(id)a1;
+ (id)defaultShadowPresets;

- (id)typeDescription;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)shadowType;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)mixedBaseObjectWithObject:(id)a0;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2 extraOffset:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (double)clampOffset:(double)a0;
- (double)clampRadius:(double)a0;
- (double)clampOpacity:(double)a0;
- (id)newShadowClampedForSwatches;
- (BOOL)isContactShadow;
- (BOOL)isDropShadow;
- (BOOL)isCurvedShadow;
- (BOOL)showForEditingText;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1;
- (void)applyToContext:(struct CGContext { } *)a0 viewScale:(double)a1 flipped:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalAngle:(double)a1;
- (BOOL)differenceRequiresRebuilding:(id)a0;
- (id)NSShadow;
- (id)initWithArchive:(const struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 unarchiver:(id)a1;
- (id)i_initWithOpacity:(double)a0 color:(id)a1 enabled:(BOOL)a2;
- (void)saveToArchive:(struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (struct CGImage { } *)i_newEmptyImage;

@end
