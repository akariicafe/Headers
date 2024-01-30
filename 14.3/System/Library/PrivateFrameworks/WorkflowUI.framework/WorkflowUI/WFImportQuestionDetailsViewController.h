@class WFParameterEditorHostingCell, NSString, WFWorkflowImportQuestion, UITextView, WFAction, WFGradient, WFWorkflowSettingsLayoutMetrics, WFParameterEditorModel, WFParameter;
@protocol WFImportQuestionDetailsViewControllerDelegate;

@interface WFImportQuestionDetailsViewController : UITableViewController <WFParameterEditorHostingCellDelegate, UITextViewDelegate>

@property (retain, nonatomic) WFWorkflowImportQuestion *importQuestion;
@property (retain, nonatomic) WFParameterEditorModel *parameterEditorModel;
@property (weak, nonatomic) WFParameterEditorHostingCell *parameterEditorCell;
@property (nonatomic) struct CGSize { double width; double height; } parameterEditorSize;
@property (nonatomic) BOOL focusOnTextView;
@property (weak, nonatomic) UITextView *textView;
@property (readonly, nonatomic) WFParameter *retainedParameter;
@property (readonly, nonatomic) WFAction *retainedAction;
@property (weak, nonatomic) id<WFImportQuestionDetailsViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFGradient *workflowGradient;
@property (retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeCategoryDidChange;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)dismissKeyboard;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textViewDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)parameterEditorCellDidInvalidateSize:(id)a0;
- (void)parameterEditorCell:(id)a0 didUpdateParameterState:(id)a1;
- (void)invalidateLayoutMetrics;
- (id)initWithImportQuestion:(id)a0 forTypingQuestion:(BOOL)a1 workflowGradient:(id)a2;
- (void)updateParameterEditorModel;
- (void)reflowParameterEditorCell;

@end
