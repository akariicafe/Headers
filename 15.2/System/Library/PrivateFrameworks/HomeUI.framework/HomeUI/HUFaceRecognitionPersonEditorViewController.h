@class NSString, HUFaceRecognitionPersonEditorItemManager;
@protocol HUFaceRecognitionPersonEditorViewControllerDelegate;

@interface HUFaceRecognitionPersonEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUFaceRecognitionAddPersonViewControllerDelegate>

@property (retain, nonatomic) HUFaceRecognitionPersonEditorItemManager *personItemManager;
@property (nonatomic) BOOL shouldUpdateDelegate;
@property (weak, nonatomic) id<HUFaceRecognitionPersonEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithPerson:(id)a0 personManager:(id)a1 home:(id)a2;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (void)addPersonViewControllerDidFinish:(id)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)a0 animated:(BOOL)a1;
- (id)initWithPersonLikeItem:(id)a0;
- (void)_deletePerson;
- (void)_presentAddPersonViewController;

@end
