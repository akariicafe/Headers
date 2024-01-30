@class TSCHChartDrawableInfo;

@interface TNChartSelection : TSDDrawableSelection

@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } range; struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _tableUID; } reference;
@property (readonly, nonatomic) TSCHChartDrawableInfo *chart;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ChartSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RangeReferenceArchive *x4; struct ChartSelectionArchive *x5; struct Reference *x6; struct DrawableSelectionArchive *x7; } *)a0 archiver:(id)a1;
- (id)initFromArchive:(const struct ChartSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RangeReferenceArchive *x4; struct ChartSelectionArchive *x5; struct Reference *x6; struct DrawableSelectionArchive *x7; } *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0;
- (id)initWithChartInfo:(id)a0 reference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a1;
- (BOOL)returnChartFrameForAutoscroll;

@end
