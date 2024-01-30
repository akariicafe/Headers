@class NSString, NSMutableDictionary, NSMutableArray;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>

@property (retain, nonatomic) NSMutableDictionary *seen;
@property (retain, nonatomic) NSMutableArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addCommand:(id)a0;
- (void)applyToString:(id)a0;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (BOOL)addToGroup:(id)a0;
- (void)closeGroup;
- (BOOL)addSeenRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0;

@end
