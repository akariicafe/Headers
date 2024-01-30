@class PSSpecifier, ICQCloudStorageGroupController, NSMutableArray;

@interface ICQUsageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    NSMutableArray *_storageSpecifiers;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
}

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)usageStorageSpecifiers;

@end
