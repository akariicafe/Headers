@interface TSTCellStyle : TSSStyle <TSTCellDiffing, TSDMixing>

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCellProperties;
+ (id)p_regionStringForTableStyleArea:(unsigned long long)a0;
+ (void)p_initBodyRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initHeaderRowRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initFooterRowRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (id)categoriesCellProperties;
+ (id)styleIDForPreset:(unsigned long long)a0 andTableStyleArea:(unsigned long long)a1;
+ (id)textStyleIDForPreset:(unsigned long long)a0 andTableStyleArea:(unsigned long long)a1;
+ (void)initDefaultPropertyMap:(id)a0 forTableStyleArea:(unsigned long long)a1 presetID:(unsigned long long)a2 colors:(id)a3 alternate:(int)a4;
+ (id)cellDiffProperties;

- (void)validate;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)loadCellStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct CellStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct Deprecated_TableStrokeArchive *x5; struct Deprecated_TableStrokeArchive *x6; struct Deprecated_TableStrokeArchive *x7; struct Deprecated_TableStrokeArchive *x8; struct PaddingArchive *x9; struct StrokeArchive *x10; struct StrokeArchive *x11; struct StrokeArchive *x12; struct StrokeArchive *x13; BOOL x14; int x15; } *)a1 unarchiver:(id)a2;
- (void)saveCellStylePropertiesToArchive:(struct CellStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct Deprecated_TableStrokeArchive *x5; struct Deprecated_TableStrokeArchive *x6; struct Deprecated_TableStrokeArchive *x7; struct Deprecated_TableStrokeArchive *x8; struct PaddingArchive *x9; struct StrokeArchive *x10; struct StrokeArchive *x11; struct StrokeArchive *x12; struct StrokeArchive *x13; BOOL x14; int x15; } *)a0 archiver:(id)a1;
- (void)loadCellStyleFromArchive:(const struct CellStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CellStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveCellStyleToArchive:(struct CellStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CellStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)upgradeIfNecessary;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3 optionalConcurrentStylesheet:(id)a4;

@end
