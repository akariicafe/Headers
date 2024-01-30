@class NSArray;

@interface TNTheme : TSATheme {
    NSArray *mTablePrototypes;
}

@property (retain, nonatomic) NSArray *tablePrototypes;

+ (void)initialize;

- (void)loadFromArchive:(const struct ThemeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ThemeArchive *x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ThemeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ThemeArchive *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)p_initDefaultHardCodedStyles;
- (void)bootstrapWhiteHardCodedTheme;
- (void)bootstrapBlackHardCodedTheme;

@end
