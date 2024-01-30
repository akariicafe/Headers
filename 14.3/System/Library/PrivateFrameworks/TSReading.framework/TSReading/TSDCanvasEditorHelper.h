@class NSString, TSKChangeNotifier;
@protocol TSDCanvasEditor;

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver> {
    TSKChangeNotifier *mChangeNotifier;
    id<TSDCanvasEditor> mCanvasEditor;
    BOOL mTornDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)canvasSelectionWithInfos:(id)a0;
+ (id)canvasSelectionWithInfos:(id)a0 andContainer:(id)a1;
+ (BOOL)physicalKeyboardIsSender:(id)a0;
+ (Class)selectionClass;

- (BOOL)isRepSelectable:(id)a0;
- (id)documentRoot;
- (int)canvasEditorCanPerformUngroupAction:(SEL)a0 withSender:(id)a1;
- (void)teardown;
- (id)layoutsForAlignAndDistribute;
- (id)infosFromCanvasSelection:(id)a0;
- (void)dealloc;
- (id)canvasSelectionFromRep:(id)a0;
- (void)pushNewEditorForSelection:(id)a0;
- (Class)editorClassForSelectionIgnoringLockedState:(id)a0;
- (Class)p_editorClassForSelection:(id)a0 shouldIgnoreLockedState:(BOOL)a1;
- (BOOL)canUngroupWithSelection:(id)a0;
- (BOOL)canDeleteComment;
- (int)canvasEditorCanPerformCopyAction:(SEL)a0 withSender:(id)a1;
- (id)initWithCanvasEditor:(id)a0;
- (int)canvasEditorCanPerformGroupAction:(SEL)a0 withSender:(id)a1;
- (id)canvasEditor;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)a0 withSender:(id)a1;
- (void)notifyRepsForSelectionChangeFrom:(id)a0 to:(id)a1;
- (BOOL)canPerformMaskWithSender:(id)a0;
- (id)editorToPopToOnEndEditingForSelection:(id)a0;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformLockAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)a0 withSender:(id)a1;
- (id)canvasSelectionWithInfos:(id)a0;
- (void)p_copy:(id)a0;
- (Class)editorClassForSelection:(id)a0;
- (BOOL)canPerformUnmaskWithSender:(id)a0;
- (BOOL)p_canReduceFileSizeForSelectedImages;
- (BOOL)canPerformMaskWithShapeWithSender:(id)a0;
- (BOOL)p_selectionContainsInlineObjects:(id)a0;
- (int)canvasEditorCanPerformDeleteAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canPerformMaskWithShapeTypeWithSender:(id)a0;
- (id)interactiveCanvasController;
- (int)canvasEditorCanPerformCutAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canGroupDrawables:(id)a0;
- (int)canvasEditorCanPerformDistributeAction:(SEL)a0 withSender:(id)a1;
- (void)asyncProcessChanges:(id)a0 forChangeSource:(id)a1;
- (int)canvasEditorCanPerformAlignAction:(SEL)a0 withSender:(id)a1;
- (id)newEditorForEditorClass:(Class)a0;
- (int)canPerformEditorAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)a0 withSender:(id)a1;
- (id)canvasSelectionWithInfos:(id)a0 andContainer:(id)a1;

@end
