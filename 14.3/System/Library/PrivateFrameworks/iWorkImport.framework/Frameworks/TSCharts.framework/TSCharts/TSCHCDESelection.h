@class TSCHChartDrawableInfo;

@interface TSCHCDESelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rowRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } columnRange;

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ChartCDESelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a0 archiver:(id)a1;
- (id)initFromArchive:(const struct ChartCDESelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
