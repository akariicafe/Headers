@class WFDictionaryEditorView;

@interface WFDictionaryEditorViewController : WFListEditorViewController

@property (readonly, nonatomic) WFDictionaryEditorView *editorView;

+ (Class)editorViewClass;

@end
