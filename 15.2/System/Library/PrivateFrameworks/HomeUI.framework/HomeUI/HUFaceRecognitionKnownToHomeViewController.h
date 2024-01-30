@class HFItemManager, NSString, HFItemProvider;

@interface HUFaceRecognitionKnownToHomeViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate>

@property (retain, nonatomic) HFItemProvider *homePersonItemProvider;
@property (retain, nonatomic) HFItemManager *knownPersonItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)a0 personManager:(id)a1 animated:(BOOL)a2;
- (void)personEditorViewController:(id)a0 didUpdateItem:(id)a1;

@end
