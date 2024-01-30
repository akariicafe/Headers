@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {
    WebBookmarkCollection *_bookmarkCollection;
    _SFFolderPickerTableViewCellLayoutManager *_cellLayoutManager;
}

- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)willBecomeActive;
- (void)_webBookmarksDidReload:(id)a0;
- (void)_showBookmarksBeingSyncedAlert;

@end
