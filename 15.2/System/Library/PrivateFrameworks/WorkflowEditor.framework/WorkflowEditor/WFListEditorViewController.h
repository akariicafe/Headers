@class WFListEditorView;
@protocol WFComponentNavigationContext;

@interface WFListEditorViewController : UIViewController

@property (retain, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) WFListEditorView *editorView;

+ (Class)editorViewClass;

- (void)done;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
