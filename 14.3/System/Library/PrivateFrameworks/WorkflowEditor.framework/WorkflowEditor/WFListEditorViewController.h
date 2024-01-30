@class WFListEditorView;
@protocol WFComponentNavigationContext;

@interface WFListEditorViewController : UIViewController

@property (retain, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) WFListEditorView *editorView;

+ (Class)editorViewClass;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)done;

@end
