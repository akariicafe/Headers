@class _TtC9Coherence9CRContext;

@interface TTMergeableStringUndoEditCommand : NSObject

@property (readonly, nonatomic) struct vector<TopoIDRange, std::__1::allocator<TopoIDRange> > { struct TopoIDRange *x0; struct TopoIDRange *x1; struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange> > { struct TopoIDRange *x0; } x2; } *deleteRanges;
@property (readonly, nonatomic) struct vector<std::__1::pair<TopoIDRange, id<TTMergeableStringStorage> >, std::__1::allocator<std::__1::pair<TopoIDRange, id<TTMergeableStringStorage> > > > { struct pair<TopoIDRange, id<TTMergeableStringStorage> > *x0; struct pair<TopoIDRange, id<TTMergeableStringStorage> > *x1; struct __compressed_pair<std::__1::pair<TopoIDRange, id<TTMergeableStringStorage> > *, std::__1::allocator<std::__1::pair<TopoIDRange, id<TTMergeableStringStorage> > > > { struct pair<TopoIDRange, id<TTMergeableStringStorage> > *x0; } x2; } *insertStrings;
@property (weak, nonatomic) _TtC9Coherence9CRContext *context;

- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)applyToString:(id)a0;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (id)temporaryIDs;
- (BOOL)hasTemporaryIDs;
- (id)renamedWith:(id)a0;
- (void)_applyToString:(id)a0;
- (void)retainTemporaryIDsInManager:(id)a0 copyingFrom:(id)a1;

@end
