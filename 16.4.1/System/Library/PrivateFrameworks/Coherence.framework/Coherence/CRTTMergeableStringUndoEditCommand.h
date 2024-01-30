@class CRContext;

@interface CRTTMergeableStringUndoEditCommand : NSObject

@property (readonly, nonatomic) void *deleteRanges;
@property (readonly, nonatomic) void *insertStrings;
@property (weak, nonatomic) CRContext *context;

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)applyToString:(id)a0;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)_applyToString:(id)a0;
- (BOOL)hasTemporaryIDs;
- (id)renamedWith:(id)a0;
- (void)retainTemporaryIDs;
- (id)temporaryIDs;

@end
