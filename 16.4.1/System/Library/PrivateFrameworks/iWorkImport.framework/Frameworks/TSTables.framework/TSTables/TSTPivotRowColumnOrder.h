@class TSTGroupBy, TSTTableInfo, TSTColumnRowUIDMap;

@interface TSTPivotRowColumnOrder : TSPObject

@property (retain) TSTColumnRowUIDMap *uidMap;
@property BOOL isRowOrderTemporary;
@property BOOL isColumnOrderTemporary;
@property (readonly) TSTGroupBy *groupBy;
@property (weak, nonatomic) TSTTableInfo *tableInfo;

+ (void)initialGroupOrderForGroupBy:(id)a0 baseLevel:(unsigned char)a1 outAllUids:(void *)a2 outBaseUids:(void *)a3 outSummaryUids:(void *)a4;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithTableInfo:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)columnRowUIDMap;
- (void)setTemporaryOrder:(const void *)a0 forDimension:(long long)a1;
- (id)_groupBy:(BOOL)a0;
- (unsigned char)_maxLevel:(BOOL)a0;
- (unsigned long long)_numberOfLevels:(BOOL)a0;
- (id)copyWithContext:(id)a0 tableInfo:(id)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })groupUidsGivenUids:(const void *)a0 selectedLevels:(const void *)a1 forDimension:(long long)a2;
- (BOOL)hasValidInfo;
- (BOOL)hasValidUidMap;
- (id)initWithContext:(id)a0 tableInfo:(id)a1 rowUids:(const void *)a2 columnUids:(const void *)a3;
- (id)initWithTableInfo:(id)a0 rowUids:(const void *)a1 columnUids:(const void *)a2;
- (void)insertUids:(const void *)a0 beforeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 forDimension:(long long)a2;
- (unsigned char)minimumCategoryLevelInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forDimension:(long long)a1;
- (const void *)orderForDimension:(long long)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedUidsForDimension:(long long)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedUidsFromUids:(const void *)a0 forDimension:(long long)a1;
- (void)removeUids:(const void *)a0 forDimension:(long long)a1;
- (void)setOrder:(const void *)a0 forDimension:(long long)a1;
- (const void *)setOrderUsingViewOrderForDimension:(long long)a0;
- (id)sortedArrayFromArray:(id)a0 forDimension:(long long)a1;
- (id)targetGroupFromIndex:(unsigned int)a0 minSourceLevel:(unsigned char)a1 templateUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 forDimension:(long long)a3;

@end
