@class HFHomeBuilder, HUEditableTextViewCell, NSString, HUUserNotificationTopicListModuleController, HUEditableTextCell, HUEditLocationItemManager, HUWallpaperPickerInlineViewController, UIBarButtonItem;
@protocol HUEditLocationViewControllerAddLocationDelegate, HUPresentationDelegate;

@interface HUEditLocationViewController : HUItemTableViewController <UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUSwitchCellDelegate, HUPresentationDelegateHost>

@property (weak, nonatomic) id<HUEditLocationViewControllerAddLocationDelegate> addLocationDelegate;
@property (retain, nonatomic) HUUserNotificationTopicListModuleController *notificationTopicModuleController;
@property (weak, nonatomic) HUEditLocationItemManager *homeItemManager;
@property (weak, nonatomic) HUEditableTextCell *nameCell;
@property (retain, nonatomic) NSString *editedName;
@property (weak, nonatomic) HUEditableTextViewCell *detailNotesCell;
@property (retain, nonatomic) NSString *editedNotes;
@property (readonly, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerViewController;
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem;
@property (readonly, nonatomic) HFHomeBuilder *homeBuilder;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)viewDidLoad;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)textViewDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)wallpaperEditing:(id)a0 didFinishWithWallpaper:(id)a1 image:(id)a2;
- (void)wallpaperEditingDidCancel:(id)a0;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)a0;
- (void)wallpaperPicker:(id)a0 didSelectWallpaper:(id)a1 withImage:(id)a2;
- (void)wallpaperPicker:(id)a0 didReceiveDroppedImage:(id)a1;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;
- (void)wallpaperPickerDidFinish:(id)a0 wallpaper:(id)a1 image:(id)a2;
- (void)addPeopleViewControllerDidCancel:(id)a0;
- (id)initWithHomeBuilder:(id)a0 presentationDelegate:(id)a1 addLocationDelegate:(id)a2 context:(unsigned long long)a3;
- (void)addButtonPressed:(id)a0;
- (id)presentNotificationSettingsForTopic:(id)a0 animated:(BOOL)a1;
- (void)updateWallpaper:(id)a0 image:(id)a1;
- (void)_updateSoftwareUpdateDynamicFooterView;
- (void)wallpaperThumbnailCell:(id)a0 didReceiveDroppedImage:(id)a1;
- (id)initWithHomeBuilder:(id)a0 presentationDelegate:(id)a1 addLocationDelegate:(id)a2;
- (void)scrollToNotificationTopicsAnimated:(BOOL)a0;
- (id)presentNetworkSettings:(BOOL)a0;
- (id)presentBridgeSettings:(BOOL)a0;
- (id)presentSoftwareUpdate:(BOOL)a0;
- (id)presentPersonalRequestsSettings:(id)a0;
- (id)presentUserLockSettings:(id)a0;
- (id)presentDefaultMediaServiceSettings:(id)a0;

@end
