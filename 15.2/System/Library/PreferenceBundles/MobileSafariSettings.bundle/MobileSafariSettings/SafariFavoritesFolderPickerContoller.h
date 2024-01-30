@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {
    WebBookmarkCollection *_bookmarkCollection;
    _SFFolderPickerTableViewCellLayoutManager *_cellLayoutManager;
}

- (id)specifiers;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_webBookmarksDidReload:(id)a0;
- (void)_showBookmarksBeingSyncedAlert;

@end
