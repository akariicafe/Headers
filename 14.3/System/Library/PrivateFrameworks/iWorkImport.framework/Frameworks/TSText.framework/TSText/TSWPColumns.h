@interface TSWPColumns : NSObject <TSSPropertyValueArchiving> {
    double _widthArray[10];
    double _gapArray[9];
}

@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL equalWidth;

+ (id)columns;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (id)initWithArchive:(const struct ColumnsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ColumnsArchive_EqualColumnsArchive *x4; struct ColumnsArchive_NonEqualColumnsArchive *x5; } *)a0 unarchiver:(id)a1;
- (id)initWithColumnCount:(unsigned long long)a0;
- (void)p_setColumnCount:(unsigned long long)a0 gapFraction:(double)a1;
- (id)initWithColumnCount:(unsigned long long)a0 equalWidth:(BOOL)a1 widthArray:(double *)a2 gapArray:(double *)a3;
- (void)p_setEqualWidth:(double)a0 equalGap:(double)a1;
- (double)p_equalGapForEqualWidth:(double)a0;
- (double)p_maxEqualGapForBodyWidth:(double)a0;
- (double)p_equalWidthForEqualGap:(double)a0;
- (id)initWithEqualColumnCount:(unsigned long long)a0 gapFraction:(double)a1;
- (void)setEqualWidth:(BOOL)a0;
- (void)saveToArchive:(struct ColumnsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ColumnsArchive_EqualColumnsArchive *x4; struct ColumnsArchive_NonEqualColumnsArchive *x5; } *)a0 archiver:(id)a1;
- (id)p_description;
- (id)initWithEqualColumnCount:(unsigned long long)a0 gapFraction:(double)a1 assert:(BOOL)a2;
- (id)initWithColumnCount:(unsigned long long)a0 equalWidth:(BOOL)a1 widthArray:(double *)a2 gapArray:(double *)a3 assert:(BOOL)a4;
- (BOOL)p_validate:(BOOL)a0;
- (void)p_setColumnCount:(unsigned long long)a0;
- (void)p_setWidth:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;
- (void)p_setGap:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;
- (id)copyWithEqualWidth:(BOOL)a0;
- (id)copyWithColumnCount:(unsigned long long)a0;
- (id)copyWithWidth:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;
- (id)copyWithGap:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;

@end
