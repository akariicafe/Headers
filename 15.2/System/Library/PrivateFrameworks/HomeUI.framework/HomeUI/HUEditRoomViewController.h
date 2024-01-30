@class UIBarButtonItem, HFRoomBuilder, UITextField, NSString, HUZoneModuleController, HUWallpaperPickerInlineViewController, HUEditRoomItemManager;
@protocol HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate;

@interface HUEditRoomViewController : HUItemCollectionViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate>

@property (retain, nonatomic) HUZoneModuleController *zoneModuleController;
@property (retain, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerController;
@property (weak, nonatomic) HUEditRoomItemManager *roomItemManager;
@property (weak, nonatomic) UITextField *editingTextField;
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem;
@property (readonly, nonatomic) HFRoomBuilder *roomBuilder;
@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerPresentationDelegate> presentationDelegate;
@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerAddRoomDelegate> addRoomDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)updateTitle;
- (void).cxx_destruct;
- (void)doneButtonPressed:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (id)itemModuleControllers;
- (void)wallpaperEditing:(id)a0 didFinishWithWallpaper:(id)a1 image:(id)a2;
- (void)wallpaperEditingDidCancel:(id)a0;
- (id)initWithRoomBuilder:(id)a0 presentationDelegate:(id)a1 addRoomDelegate:(id)a2;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)a0;
- (void)wallpaperPicker:(id)a0 didSelectWallpaper:(id)a1 withImage:(id)a2;
- (void)wallpaperPicker:(id)a0 didReceiveDroppedImage:(id)a1;
- (void)wallpaperPickerDidFinish:(id)a0 wallpaper:(id)a1 image:(id)a2;
- (void)addButtonPressed:(id)a0;
- (void)updateWallpaper:(id)a0 image:(id)a1;
- (void)wallpaperThumbnailCell:(id)a0 didReceiveDroppedImage:(id)a1;
- (id)trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a0;
- (void)nameFieldTextChanged:(id)a0;
- (void)presentWallpaperEditingViewControllerWithImage:(id)a0 wallpaper:(id)a1;

@end
