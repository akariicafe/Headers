@class CRContext;

@interface CRTTMergeableStringUndoEditCommand : NSObject

@property (readonly, nonatomic) void *deleteRanges;
@property (readonly, nonatomic) void *insertStrings;
@property (weak, nonatomic) CRContext *context;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)applyToString:(id)a0;
- (void)dealloc;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (id)temporaryIDs;
- (BOOL)hasTemporaryIDs;
- (id)renamedWith:(id)a0;
- (void)_applyToString:(id)a0;
- (void)retainTemporaryIDsInManager:(id)a0 copyingFrom:(id)a1;

@end
