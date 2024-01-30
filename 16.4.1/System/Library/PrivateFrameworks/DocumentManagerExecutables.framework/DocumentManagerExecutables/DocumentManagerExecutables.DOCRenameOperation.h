@class NSString;

@interface DocumentManagerExecutables.DOCRenameOperation : FPRenameOperation <DOCUndoableOperation> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ newDisplayName;
    void /* unknown type, empty encoding */ newFileName;
    void /* unknown type, empty encoding */ oldDisplayName;
    void /* unknown type, empty encoding */ oldFileName;
    void /* unknown type, empty encoding */ undoManager;
}

@property (nonatomic, readonly) NSString *actionNameForUndoing;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 newDisplayName:(id)a1;
- (id)initWithItem:(id)a0 newFileName:(id)a1;
- (id)initWithItem:(id)a0 newName:(id)a1;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;

@end
