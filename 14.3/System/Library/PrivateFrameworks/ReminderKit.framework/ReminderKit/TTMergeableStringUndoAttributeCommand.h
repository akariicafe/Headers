@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand>

@property (readonly, nonatomic) struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> *x0; struct pair<TopoIDRange, NSDictionary *> *x1; struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> *x0; } x2; } *attributeRanges;
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

@end
