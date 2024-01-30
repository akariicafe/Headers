@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (id)propertiesAllowingNSNull;
+ (id)imageStylePresetStyleDescriptor;
+ (id)movieStylePresetStyleDescriptor;
+ (void)loadMediaStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct MediaStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct ShadowArchive *x5; struct ReflectionArchive *x6; float x7; } *)a1 unarchiver:(id)a2;
+ (void)saveMediaStylePropertyMap:(id)a0 toArchive:(struct MediaStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct ShadowArchive *x5; struct ReflectionArchive *x6; float x7; } *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)loadFromArchive:(const struct MediaStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct MediaStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct MediaStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct MediaStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
