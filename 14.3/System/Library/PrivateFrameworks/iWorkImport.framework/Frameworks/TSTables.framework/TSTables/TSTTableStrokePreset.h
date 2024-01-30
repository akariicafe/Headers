@class NSString;

@interface TSTTableStrokePreset : TSPObject <TSSPreset> {
    unsigned long long mIndex;
}

@property (readonly, nonatomic) NSString *presetKind;

- (id)initWithContext:(id)a0;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)saveToArchive:(struct TableStrokePresetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
