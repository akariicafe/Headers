@class TSTTableInfo, TSTColumnRowUIDMap;

@interface TSTCategoryOrder : TSPObject

@property (readonly, weak) TSTTableInfo *tableInfo;
@property (retain) TSTColumnRowUIDMap *uidMap;
@property BOOL isRowOrderTemporary;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })rowOrder;
- (void)setRowOrder:(const void *)a0;
- (id)initWithTableInfo:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })setRowOrderUsingViewOrder;
- (unsigned char)minimumCategoryLevelInRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)columnRowUIDMap;
- (id)copyWithContext:(id)a0 tableInfo:(id)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })groupUidsGivenRowUids:(const void *)a0 selectedLevels:(const void *)a1;
- (BOOL)hasValidInfo;
- (BOOL)hasValidUidMap;
- (id)initWithContext:(id)a0 tableInfo:(id)a1 rowUids:(const void *)a2;
- (id)initWithTableInfo:(id)a0 rowUids:(const void *)a1;
- (void)insertRowUids:(const void *)a0 beforeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedRowUidsFromUids:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedRowUidsWithLabels;
- (void)removeRowUids:(const void *)a0;
- (void)setTemporaryRowOrder:(const void *)a0;
- (id)sortedArrayFromArray:(id)a0;
- (id)targetGroupFromRowIndex:(unsigned int)a0 minSourceLevel:(unsigned char)a1 templateRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;

@end
