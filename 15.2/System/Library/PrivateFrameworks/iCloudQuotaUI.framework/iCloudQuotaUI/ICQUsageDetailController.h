@class NSMutableArray, NSMutableDictionary, ICQUsageStorageController;

@interface ICQUsageDetailController : PSEditableListController {
    BOOL _showingAll;
    NSMutableArray *_documentsGroup;
}

@property (readonly, nonatomic) NSMutableDictionary *mediaCache;
@property (weak, nonatomic) ICQUsageStorageController *storageController;

+ (id)mediaGroups;
+ (void)setupSpecifier:(id)a0 forMediaGroups:(id)a1;
+ (float)totalSizeForGroups:(id)a0;
+ (BOOL)hasMediaForGroups:(id)a0;
+ (id)mpKeyTranslations;

- (id)specifiers;
- (id)size:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)showMore:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)needsToShowToolbarInPrefsAppRoot;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)hasMedia;
- (BOOL)isAppController;
- (BOOL)removeMediaEntry:(id)a0 inSection:(long long)a1;
- (BOOL)updateSizesAfterDeletingMediaKind:(id)a0 deletedSection:(BOOL)a1 shouldPop:(BOOL)a2;
- (void)deleteApp;
- (id)dynamicSize:(id)a0;
- (id)copyMediaSpecifiers;
- (id)documentsAndDataSpecifiers;
- (void)confirmAppDeletion;

@end
