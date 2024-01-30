@class NSString, SSSectionedDataSource, WFWorkflow, SSSection, WFWorkflowSettingsLayoutMetrics, UITableView;

@interface WFImportQuestionsEditViewController : UIViewController <UITableViewDelegate, WFParameterPickerViewControllerDelegate, WFImportQuestionDetailsViewControllerDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) SSSectionedDataSource *dataSource;
@property (retain, nonatomic) SSSection *addSection;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithWorkflow:(id)a0;
- (void)loadView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)parameterPicker:(id)a0 didFinishWithParameter:(id)a1 ofAction:(id)a2;
- (void)parameterPickerDidCancel:(id)a0;
- (void)questionDetailsViewControllerWillDisappear:(id)a0 withUpdatedImportQuestion:(id)a1;
- (void)updateFooterText;
- (void)updateEditButton;

@end
