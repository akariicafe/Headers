@class NSString, TSWPDropCap;

@interface TSWPDropCapStyle : TSSStyle <TSSPreset, TSDMixing>

@property (readonly, nonatomic) TSWPDropCap *dropCap;
@property (readonly, nonatomic) TSWPDropCapStyle *variationWithSingleCharacterDropCap;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)dropCapProperties;

- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)loadFromArchive:(const struct DropCapStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CharacterStylePropertiesArchive *x5; struct DropCapStylePropertiesArchive *x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct DropCapStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CharacterStylePropertiesArchive *x5; struct DropCapStylePropertiesArchive *x6; unsigned int x7; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (unsigned long long)minimumReadVersion;
- (void)mapNonDefaultPropertyOverridesForParentStyle:(id)a0 propertyMap:(id)a1;
- (BOOL)wantsCustomResolveLogicForProperty:(int)a0 forStyles:(id)a1;
- (id)resolvedValueForProperty:(int)a0 inStyles:(id)a1;
- (int)resolvedIntForProperty:(int)a0 inStyles:(id)a1;
- (double)resolvedFloatForProperty:(int)a0 inStyles:(id)a1;

@end
