@class NSString;

@interface TSDShapeStyle : TSSStyle <TSSPreset, TSDMixing>

@property (readonly, nonatomic) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (id)propertiesAllowingNSNull;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct ShapeStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct StrokeArchive *x5; struct ShadowArchive *x6; struct ReflectionArchive *x7; struct LineEndArchive *x8; struct LineEndArchive *x9; float x10; } *)a1 unarchiver:(id)a2;
+ (void)saveShapeStylePropertyMap:(id)a0 toArchive:(struct ShapeStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct StrokeArchive *x5; struct ShadowArchive *x6; struct ReflectionArchive *x7; struct LineEndArchive *x8; struct LineEndArchive *x9; float x10; } *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (BOOL)wantsHighContrastBackgroundColor;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadFromArchive:(const struct ShapeStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct ShapeStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ShapeStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct ShapeStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)wantsHighContrastStrokeColorWithColor:(id)a0;
- (BOOL)wantsHighContrastFillColorWithColor:(id)a0;
- (BOOL)wantsHighContrastBackgroundColorWithColor:(id)a0;
- (BOOL)hasLineEnds;

@end
