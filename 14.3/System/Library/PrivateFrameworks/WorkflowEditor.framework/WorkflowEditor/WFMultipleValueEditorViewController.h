@class WFMultipleValueEditorView;
@protocol WFComponentNavigationContext;

@interface WFMultipleValueEditorViewController : UIViewController

@property (retain, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) WFMultipleValueEditorView *editorView;

+ (Class)editorViewClass;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)done;

@end
