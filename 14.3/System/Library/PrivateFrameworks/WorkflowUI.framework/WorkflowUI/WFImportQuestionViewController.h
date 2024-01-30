@class WFWorkflowImportQuestion, WFParameterEditorHostingCell, WFParameterEditorModel, WFGradient, NSString, UIViewController;
@protocol WFImportQuestionViewControllerDelegate;

@interface WFImportQuestionViewController : UITableViewController <WFParameterEditorHostingCellDelegate, WFActionEventObserver>

@property (weak, nonatomic) WFParameterEditorHostingCell *parameterEditorCell;
@property (retain, nonatomic) WFParameterEditorModel *parameterEditorModel;
@property (nonatomic) struct CGSize { double width; double height; } parameterEditorSize;
@property (weak, nonatomic) id<WFImportQuestionViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflowImportQuestion *importQuestion;
@property (readonly, nonatomic) WFGradient *workflowGradient;
@property (weak, nonatomic) UIViewController *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)parameterEditorCellDidInvalidateSize:(id)a0;
- (void)parameterEditorCell:(id)a0 didUpdateParameterState:(id)a1;
- (void)updateParameterEditorModel;
- (id)initWithImportQuestion:(id)a0 workflowGradient:(id)a1;
- (void)reflowParameterEditor;

@end
