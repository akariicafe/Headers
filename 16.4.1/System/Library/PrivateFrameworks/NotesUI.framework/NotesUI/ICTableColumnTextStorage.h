@class NSString, NSMutableDictionary, NSMutableIndexSet, NSUUID, ICTable, NSMutableArray, NSArray;
@protocol ICTableUndoHelping;

@interface ICTableColumnTextStorage : ICTableTextStorage <ICTableCellMergeableStringObserving>

@property (readonly, weak, nonatomic) ICTable *table;
@property (readonly, nonatomic) NSMutableArray *rows;
@property (readonly, nonatomic) NSMutableDictionary *mergeableStringDelegates;
@property (readonly, nonatomic) NSMutableIndexSet *rowStartIndexes;
@property (nonatomic) unsigned long long preventEditingUpdatesCount;
@property (readonly) NSUUID *columnID;
@property (weak, nonatomic) id<ICTableUndoHelping> undoHelper;
@property (readonly, nonatomic) NSArray *populatedRows;
@property (nonatomic) BOOL shouldPreventUndoCommands;
@property (readonly, nonatomic) BOOL preventEditingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)textStorage:(id)a0 didProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (void)closeUndoGroups;
- (void)tableCellWasEditedAtColumnID:(id)a0 rowID:(id)a1 edited:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 changeInLength:(long long)a4;
- (void)beginPreventEditingUpdates;
- (void)breakUndoCoalescing;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForRowID:(id)a0;
- (id)editAtIndex:(unsigned long long)a0;
- (void)endPreventEditingUpdates;
- (void)enumerateEditsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (unsigned long long)indexOfRow:(id)a0;
- (unsigned long long)indexOfRowAtLocation:(unsigned long long)a0;
- (id)initWithTable:(id)a0 columnID:(id)a1 replicaID:(id)a2;
- (unsigned long long)insertionIndexForRow:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })logicalRangeForLocation:(unsigned long long)a0;
- (id)mergeableStringForRowID:(id)a0;
- (unsigned long long)nextLocationAfterRowLocation:(unsigned long long)a0;
- (void)removeRow:(id)a0;
- (void)removeTextForRow:(id)a0;
- (void)resetUndoManager;
- (void)restoreSelection:(id)a0;
- (id)rowAtIndex:(unsigned long long)a0 rowRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)rowLocationForRowID:(id)a0;
- (unsigned long long)rowLocationForRowIndex:(unsigned long long)a0;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)a0;
- (void)updateStorageForMovedRow:(id)a0;
- (BOOL)wantsTimestampUpdates;
- (BOOL)wantsUndoCommands;

@end
