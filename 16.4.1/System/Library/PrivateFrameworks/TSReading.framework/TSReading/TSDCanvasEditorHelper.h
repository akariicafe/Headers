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

- (void)dealloc;
- (void)teardown;
- (void)asyncProcessChanges:(id)a0 forChangeSource:(id)a1;
- (int)canPerformEditorAction:(SEL)a0 withSender:(id)a1;
- (id)documentRoot;
- (id)interactiveCanvasController;
- (void)p_copy:(id)a0;
- (BOOL)canDeleteComment;
- (BOOL)canGroupDrawables:(id)a0;
- (BOOL)canPerformMaskWithSender:(id)a0;
- (BOOL)canPerformMaskWithShapeTypeWithSender:(id)a0;
- (BOOL)canPerformMaskWithShapeWithSender:(id)a0;
- (BOOL)canPerformUnmaskWithSender:(id)a0;
- (BOOL)canUngroupWithSelection:(id)a0;
- (id)canvasEditor;
- (int)canvasEditorCanPerformAlignAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformCopyAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformCutAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformDeleteAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformDistributeAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformGroupAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformLockAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)a0 withSender:(id)a1;
- (int)canvasEditorCanPerformUngroupAction:(SEL)a0 withSender:(id)a1;
- (id)canvasSelectionFromRep:(id)a0;
- (id)canvasSelectionWithInfos:(id)a0;
- (id)canvasSelectionWithInfos:(id)a0 andContainer:(id)a1;
- (Class)editorClassForSelection:(id)a0;
- (Class)editorClassForSelectionIgnoringLockedState:(id)a0;
- (id)editorToPopToOnEndEditingForSelection:(id)a0;
- (id)infosFromCanvasSelection:(id)a0;
- (id)initWithCanvasEditor:(id)a0;
- (BOOL)isRepSelectable:(id)a0;
- (id)layoutsForAlignAndDistribute;
- (id)newEditorForEditorClass:(Class)a0;
- (void)notifyRepsForSelectionChangeFrom:(id)a0 to:(id)a1;
- (BOOL)p_canReduceFileSizeForSelectedImages;
- (Class)p_editorClassForSelection:(id)a0 shouldIgnoreLockedState:(BOOL)a1;
- (BOOL)p_selectionContainsInlineObjects:(id)a0;
- (void)pushNewEditorForSelection:(id)a0;

@end
