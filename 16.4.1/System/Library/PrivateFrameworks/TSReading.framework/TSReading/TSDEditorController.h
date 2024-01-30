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

- (void)endTransaction;
- (void)beginTransaction;
- (void)dealloc;
- (void)teardown;
- (id)init;
- (id)textInputEditor;
- (id)editorForEditAction:(SEL)a0 withSender:(id)a1;
- (BOOL)anyEditorProhibitsAction:(SEL)a0;
- (id)currentEditors;
- (id)currentEditorsConformingToProtocol:(id)a0;
- (id)currentEditorsOfClass:(Class)a0;
- (void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
- (void)editorDidChangeSelection:(id)a0 withSelectionFlags:(unsigned long long)a1;
- (void)editorDidChangeSelectionAndWantsKeyboard:(id)a0 withSelectionFlags:(unsigned long long)a1;
- (id)editorForEditAction:(SEL)a0 withSender:(id)a1 response:(int *)a2;
- (void)editorSelectionWasForciblyChanged:(id)a0;
- (void)enumerateEditorsOnStackUsingBlock:(id /* block */)a0;
- (id)initWithDocumentRoot:(id)a0;
- (id)mostSpecificCurrentEditorOfClass:(Class)a0;
- (id)mostSpecificCurrentEditorOfClass:(Class)a0 conformingToProtocol:(id)a1;
- (id)mostSpecificEditorConformingToProtocol:(id)a0;
- (void)notifyResignedTextInputEditors;
- (id)objectForInspectorPropertyKey:(id)a0;
- (void)p_didChangeCurrentEditors;
- (void)p_didChangeTextInputEditor;
- (void)p_setTextInputEditor:(id)a0;
- (void)p_willChangeCurrentEditors;
- (void)p_willChangeCurrentEditorsWithNewEditors:(id)a0;
- (void)p_willChangeTextInputEditor;
- (void)popEditor:(id)a0;
- (void)popEditor:(id)a0 andPushTextInputEditor:(id)a1;
- (void)popToEditor:(id)a0;
- (void)pushEditor:(id)a0;
- (void)removeObjectForInspectorPropertyKey:(id)a0;
- (void)setObject:(id)a0 forInspectorPropertyKey:(id)a1;
- (void)setTextInputEditor:(id)a0;
- (void)willChangeCurrentEditorsWhenCommittingInspectorChanges;

@end
