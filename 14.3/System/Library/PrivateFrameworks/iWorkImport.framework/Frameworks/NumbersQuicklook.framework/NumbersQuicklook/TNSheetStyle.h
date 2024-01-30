@interface TNSheetStyle : TSSStyle

+ (id)properties;
+ (id)sheetStyleIDForPreset:(unsigned long long)a0;
+ (id)defaultSheetStyleWithContext:(id)a0;

- (id)backgroundColor;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadSheetStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct SheetStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; } *)a1 unarchiver:(id)a2;
- (void)saveSheetStylePropertiesToArchive:(struct SheetStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; } *)a0 archiver:(id)a1;
- (unsigned long long)minimumReadVersion;

@end
