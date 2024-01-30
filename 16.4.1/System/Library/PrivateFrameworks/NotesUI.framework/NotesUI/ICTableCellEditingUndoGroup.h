@class NSUUID, ICTableAttachmentSelection, ICTableUndoTarget;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup

@property (readonly, nonatomic) NSUUID *columnID;
@property (readonly, nonatomic) NSUUID *rowID;
@property (readonly, nonatomic) ICTableAttachmentSelection *tableSelection;
@property (readonly, nonatomic) ICTableUndoTarget *undoTarget;

- (id)init;
- (void).cxx_destruct;
- (id)initWithColumn:(id)a0 row:(id)a1 selection:(id)a2 undoTarget:(id)a3;

@end
