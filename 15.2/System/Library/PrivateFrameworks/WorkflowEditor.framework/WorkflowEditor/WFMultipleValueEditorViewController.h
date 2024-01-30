@class WFMultipleValueEditorView;
@protocol WFComponentNavigationContext;

@interface WFMultipleValueEditorViewController : UIViewController

@property (retain, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) WFMultipleValueEditorView *editorView;

+ (Class)editorViewClass;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
