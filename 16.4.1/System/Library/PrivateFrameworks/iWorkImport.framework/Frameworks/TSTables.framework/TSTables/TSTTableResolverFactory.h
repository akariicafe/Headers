@class NSString;

@interface TSTTableResolverFactory : NSObject <TSCETableResolverFactoryProtocol, TSCEResolverLocatingProtocol> {
    void *_calcEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueGridForCategoryRef:(id)a0 atRowUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 hidingActionMask:(unsigned char)a2 error:(id *)a3;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })aggregateRangeRefForCategoryRef:(id)a0;
- (unsigned char)aggregateTypeForCategoryRef:(id)a0;
- (struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> { id *x0; id *x1; struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> { id *x0; } x2; })categoryRefsForSpanningCategoryRef:(id)a0;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; struct TSCECellRef *x1; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; } x2; })cellRefsForCategoryRef:(id)a0 atRowUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithCalcEngine:(void *)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })mapOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct TSCETableResolver { void /* function */ **x0; } *)newTableResolverForResolver:(id)a0;
- (id)resolverContainerMatchingName:(id)a0 inDocumentRoot:(id)a1;
- (id)resolverMatchingName:(id)a0 inDocumentRoot:(id)a1 contextResolver:(id)a2;
- (id)resolverMatchingNameWithContextContainer:(id)a0 inDocumentRoot:(id)a1 contextContainerName:(id)a2;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; struct TSCECellRef *x1; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef *x0; } x2; })unorderedCellRefsForCategoryRef:(id)a0 atRowUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct vector<TSCEValue, std::allocator<TSCEValue>> { struct TSCEValue *x0; struct TSCEValue *x1; struct __compressed_pair<TSCEValue *, std::allocator<TSCEValue>> { struct TSCEValue *x0; } x2; })valuesForCategoryRef:(id)a0 atRowUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 hidingActionMask:(unsigned char)a2 error:(id *)a3;

@end
