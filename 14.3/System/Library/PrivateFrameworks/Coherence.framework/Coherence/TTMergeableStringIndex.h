@class _TtC9Coherence9CRContext, NSUUID;

@interface TTMergeableStringIndex : NSObject

@property (readonly, nonatomic) _TtC9Coherence9CRContext *context;
@property (readonly, nonatomic) unsigned long long affinity;
@property (readonly, nonatomic) struct TopoID { struct TopoReplica { NSUUID *uuid; unsigned int index; } replica; unsigned int clock; } index;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)_objCRenameSequence;
- (id)initWithContext:(id)a0 topoID:(struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; })a1 affinity:(unsigned long long)a2;

@end
