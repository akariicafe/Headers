@interface TTMergeableStringSelection : NSObject {
    struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *__begin_; struct pair<TopoID, TopoID> *__end_; struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *__value_; } __end_cap_; } _selectionRanges;
}

@property (nonatomic) unsigned long long selectionAffinity;

- (struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *x0; struct pair<TopoID, TopoID> *x1; struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *x0; } x2; } *)selectionRanges;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;

@end
