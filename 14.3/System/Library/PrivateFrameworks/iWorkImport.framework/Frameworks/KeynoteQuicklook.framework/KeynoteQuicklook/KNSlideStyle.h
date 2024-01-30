@interface KNSlideStyle : TSSStyle

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (void)createStylePresetInStylesheet:(id)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)loadFromArchive:(const struct SlideStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct SlideStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct SlideStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct SlideStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadSlideStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct SlideStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct TransitionAttributesArchive *x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *)a1 unarchiver:(id)a2;
- (void)saveSlideStylePropertyMap:(id)a0 toArchive:(struct SlideStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct TransitionAttributesArchive *x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *)a1 archiver:(id)a2;

@end
