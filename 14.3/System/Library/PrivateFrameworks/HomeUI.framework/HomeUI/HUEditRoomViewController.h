@class UIBarButtonItem, HUEditableTextCell, HFRoomBuilder, NSString, HUZoneModuleController, HUWallpaperPickerInlineViewController, HUEditRoomItemManager;
@protocol HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate;

@interface HUEditRoomViewController : HUItemTableViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate>

@property (retain, nonatomic) HUZoneModuleController *zoneModuleController;
@property (retain, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerController;
@property (weak, nonatomic) HUEditRoomItemManager *roomItemManager;
@property (weak, nonatomic) HUEditableTextCell *nameCell;
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem;
@property (readonly, nonatomic) HFRoomBuilder *roomBuilder;
@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerPresentationDelegate> presentationDelegate;
@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerAddRoomDelegate> addRoomDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)doneButtonPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)updateTitle;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)viewDidLoad;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (void)wallpaperEditing:(id)a0 didFinishWithWallpaper:(id)a1 image:(id)a2;
- (void)wallpaperEditingDidCancel:(id)a0;
- (id)initWithRoomBuilder:(id)a0 presentationDelegate:(id)a1 addRoomDelegate:(id)a2;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)a0;
- (void)wallpaperPicker:(id)a0 didSelectWallpaper:(id)a1 withImage:(id)a2;
- (void)wallpaperPicker:(id)a0 didReceiveDroppedImage:(id)a1;
- (id)itemModuleControllers;
- (void)wallpaperPickerDidFinish:(id)a0 wallpaper:(id)a1 image:(id)a2;
- (void)addButtonPressed:(id)a0;
- (void)updateWallpaper:(id)a0 image:(id)a1;
- (void)wallpaperThumbnailCell:(id)a0 didReceiveDroppedImage:(id)a1;
- (void)_resignTextFieldFirstResponder;
- (void)nameFieldTextChanged:(id)a0;
- (void)presentWallpaperEditingViewControllerWithImage:(id)a0 wallpaper:(id)a1;
- (id)_allTextFields;

@end
