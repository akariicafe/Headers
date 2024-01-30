@interface CRTTMergeableStringSelection : NSObject {
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> { void *__value_; } __end_cap_; } _selectionRanges;
}

@property (nonatomic) unsigned long long selectionAffinity;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void *)selectionRanges;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;

@end
