@class NSString, HUFaceRecognitionUserPhotosLibrarySettingsItemManager, HUFaceRecognitionUserPhotosLibrarySettingsModuleController;

@interface HUFaceRecognitionUserPhotosLibrarySettingsViewController : HUItemTableViewController <HUTappableTextViewDelegate, HUItemModuleControllerHosting>

@property (retain, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsItemManager *photosLibrarySettingsItemManager;
@property (retain, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsModuleController *photosLibrarySettingsModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithUserPhotosLibraryItem:(id)a0;
- (id)itemModuleControllers;
- (void)tappableTextView:(id)a0 tappedAtIndex:(unsigned long long)a1 withAttributes:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
