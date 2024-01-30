@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand>

@property (readonly, nonatomic) struct vector<TopoIDRange, std::__1::allocator<TopoIDRange> > { struct TopoIDRange *x0; struct TopoIDRange *x1; struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange> > { struct TopoIDRange *x0; } x2; } *deleteRanges;
@property (readonly, nonatomic) struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> *x0; struct pair<TopoIDRange, NSAttributedString *> *x1; struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> *x0; } x2; } *insertStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (id)init;
- (BOOL)addToGroup:(id)a0;
- (void)dealloc;
- (void)applyToString:(id)a0;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;

@end
