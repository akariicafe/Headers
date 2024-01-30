@class TSTCategoryOwner, TSTAggNode, TSTGroupBy;

@interface TSTAggregator : TSPObject {
    TSTAggNode *_aggRoot;
}

@property (weak, nonatomic) TSTGroupBy *groupBy;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } columnUid;
@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner;

- (id)description;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)encodeToArchive:(void *)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; struct TSCECellRef *x1; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; } x2; })cellRefsForRowIndexes:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)unpackAfterUnarchiveForGroupBy:(id)a0;
- (id)aggNodeForGroupNode:(id)a0;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; struct TSCECellRef *x1; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; } x2; })cellRefsForAggNodesAtGroup:(id)a0;
- (void)clearAggFormulas:(id)a0;
- (id)initWithArchive:(const void *)a0 groupBy:(id)a1;
- (id)initWithColumn:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 context:(id)a1;
- (id)initWithColumn:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 forGroupBy:(id)a1;
- (void)rebuildAggFormulas;
- (void)upgradeForNewAggregateTypes:(id)a0;

@end
