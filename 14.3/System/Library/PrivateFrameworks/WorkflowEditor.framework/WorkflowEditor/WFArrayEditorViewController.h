@class WFArrayEditorView;

@interface WFArrayEditorViewController : WFListEditorViewController

@property (readonly, nonatomic) WFArrayEditorView *editorView;

+ (Class)editorViewClass;

@end
