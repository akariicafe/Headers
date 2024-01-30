@interface TSWPTateChuYokoField : TSWPSmartField

- (BOOL)allowsEditing;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (void)loadFromArchive:(const struct TateChuYokoFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct SmartFieldArchive *x4; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TateChuYokoFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct SmartFieldArchive *x4; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;

@end
