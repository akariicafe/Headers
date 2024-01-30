@class NSString, DOCDownloadSettings, PSSpecifier, FPItem, NSMutableArray, FPItemManager;

@interface SafariDownloadsSettingsController : SafariSettingsListController <UIDocumentPickerDelegate> {
    DOCDownloadSettings *_downloadSettings;
    FPItemManager *_itemManager;
    PSSpecifier *_downloadsFolderGroupSpecifier;
    PSSpecifier *_selectOtherFolderSpecifier;
    PSSpecifier *_defaultDownloadsLocationSpecifier;
    NSMutableArray *_providerSpecifiers;
    FPItem *_cachedDownloadsLocationItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_itemManager;
- (id)_downloadSettings;
- (void)_updateSpecifiersWithProviderDomains:(id)a0;
- (void)_updateSelectedFolder;
- (void)_updateFooterWithProviderDomain:(id)a0;
- (void)_showFolderPicker;
- (void)_setDownloadsLocationForProviderDomain:(id)a0;
- (void)_setDefaultDownloadsLocationItem:(id)a0;

@end
