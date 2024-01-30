@class TSTCellDiffArray, TSTCellUIDList;

@interface TSTCellDiffMap : TSPObject <NSCopying> {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *__value_; } __end_cap_; } _cellIDs;
}

@property (retain, nonatomic) TSTCellUIDList *cellUIDList;
@property (retain, nonatomic) TSTCellDiffArray *cellDiffArray;
@property (nonatomic, getter=isUIDBased) BOOL uidBased;
@property (nonatomic) BOOL containsCellBorderChanges;
@property (nonatomic) BOOL containsSuppressCustomFormatHandlingProperty;
@property (readonly, nonatomic) unsigned long long count;

+ (id)cellDiffMapWithContext:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)enumerateElementsUsingBlock:(id /* block */)a0;
- (const struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *x0; struct TSUCellCoord *x1; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *x0; } x2; } *)cellIDs;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 cellDiffArray:(id)a1 cellUIDList:(id)a2 uidBased:(BOOL)a3;
- (BOOL)p_scanCellDiffArrayForCellBorderChanges:(id)a0;
- (BOOL)p_scanCellDiffArrayForSuppressCustomFormatHandlingProperty:(id)a0;
- (id)addCellDiff:(id)a0 andCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a1 avoidCopy:(BOOL)a2;
- (id)addCellDiff:(id)a0 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 avoidCopy:(BOOL)a2;
- (BOOL)p_scanNSArrayOfDiffsForCellBorderChanges:(id)a0;
- (BOOL)p_scanNSArrayOfDiffsForSuppressCustomFormatHandlingProperty:(id)a0;
- (void)addCellDiff:(id)a0 andCellUID:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a1;
- (void)addCellDiff:(id)a0 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)enumerateCellIDElementsUsingBlock:(id /* block */)a0;
- (id)pruneCellDiffMapAgainstTable:(id)a0 behavior:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)a0;
- (id)initWithContext:(id)a0 cellDiff:(id)a1 cellUIDList:(id)a2;
- (void)addCellDiffMap:(id)a0;
- (void)addCellDiffs:(id)a0 atCellUIDs:(id)a1;
- (void)appendCellDiffMap:(id)a0;
- (id)pruneCellDiffMapAgainstTable:(id)a0 behavior:(unsigned long long)a1;
- (id)uuidBasedCellDiffMapByTableInfo:(id)a0;
- (id)cellDiffMapByIntersectingUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0 inRows:(BOOL)a1;
- (id)cellDiffMapByRemovingRows:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0;
- (id)cellDiffMapByRemovingColumns:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0;

@end
