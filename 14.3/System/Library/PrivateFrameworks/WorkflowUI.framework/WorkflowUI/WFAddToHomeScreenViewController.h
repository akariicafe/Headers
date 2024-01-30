@class WFWorkflowWizardNameCell, WFAddToHomeIconPreviewCell, WFHomeScreenIcon, WFWorkflow, NSString;
@protocol WFAddToHomeScreenViewControllerDelegate;

@interface WFAddToHomeScreenViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate>

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFHomeScreenIcon *icon;
@property (retain, nonatomic) WFAddToHomeIconPreviewCell *previewCell;
@property (retain, nonatomic) WFWorkflowWizardNameCell *editorCell;
@property (weak, nonatomic) id<WFAddToHomeScreenViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)iconButtonDropdownMenuInWorkflowWizardNameCell:(id)a0;
- (void)workflowWizardNameCell:(id)a0 didUpdateName:(id)a1;
- (void)registerCells;
- (void)presentPickerControllerWithSourceType:(long long)a0;
- (void)didTapAdd;

@end
