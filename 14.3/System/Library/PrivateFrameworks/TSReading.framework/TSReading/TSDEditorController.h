@class TSKDocumentRoot, NSMutableDictionary, NSObject, NSMutableArray;
@protocol TSDEditor;

@interface TSDEditorController : NSObject {
    TSKDocumentRoot *mDocumentRoot;
    NSMutableArray *mEditorStack;
    NSObject<TSDEditor> *mTextInputEditor;
    unsigned long long mTransactionLevel;
    BOOL mDidChangeTextInputEditor;
    BOOL mDidChangeCurrentEditors;
    BOOL mNotifiedWillChangeTextInputEditor;
    BOOL mNotifiedWillChangeCurrentEditors;
    BOOL mIsReentrantResigningTextInputEditors;
    NSMutableArray *mResignedTextInputEditors;
    NSMutableDictionary *mInspectorPropertyValueMap;
    unsigned long long mChangingCurrentEditorsWhenCommittingInspectorChangesCount;
}

@property (readonly, nonatomic, getter=isChangingCurrentEditorsWhenCommittingInspectorChanges) BOOL changingCurrentEditorsWhenCommittingInspectorChanges;

- (id)textInputEditor;
- (void)beginTransaction;
- (void)endTransaction;
- (id)currentEditorsConformingToProtocol:(id)a0;
- (void)teardown;
- (id)init;
- (void)setObject:(id)a0 forInspectorPropertyKey:(id)a1;
- (id)editorForEditAction:(SEL)a0 withSender:(id)a1;
- (id)currentEditorsOfClass:(Class)a0;
- (void)popEditor:(id)a0;
- (void)dealloc;
- (id)mostSpecificEditorConformingToProtocol:(id)a0;
- (void)willChangeCurrentEditorsWhenCommittingInspectorChanges;
- (void)pushEditor:(id)a0;
- (void)editorDidChangeSelectionAndWantsKeyboard:(id)a0 withSelectionFlags:(unsigned long long)a1;
- (void)popToEditor:(id)a0;
- (void)popEditor:(id)a0 andPushTextInputEditor:(id)a1;
- (void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
- (void)p_setTextInputEditor:(id)a0;
- (id)currentEditors;
- (void)p_willChangeCurrentEditorsWithNewEditors:(id)a0;
- (id)initWithDocumentRoot:(id)a0;
- (id)mostSpecificCurrentEditorOfClass:(Class)a0;
- (void)enumerateEditorsOnStackUsingBlock:(id /* block */)a0;
- (void)notifyResignedTextInputEditors;
- (void)p_willChangeCurrentEditors;
- (void)p_willChangeTextInputEditor;
- (BOOL)anyEditorProhibitsAction:(SEL)a0;
- (void)editorDidChangeSelection:(id)a0 withSelectionFlags:(unsigned long long)a1;
- (void)p_didChangeTextInputEditor;
- (id)objectForInspectorPropertyKey:(id)a0;
- (void)removeObjectForInspectorPropertyKey:(id)a0;
- (void)editorSelectionWasForciblyChanged:(id)a0;
- (id)editorForEditAction:(SEL)a0 withSender:(id)a1 response:(int *)a2;
- (void)p_didChangeCurrentEditors;
- (id)mostSpecificCurrentEditorOfClass:(Class)a0 conformingToProtocol:(id)a1;
- (void)setTextInputEditor:(id)a0;

@end
