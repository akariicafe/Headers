@class PSSpecifier, ICQCloudStorageGroupController, NSMutableArray;

@interface ICQUsageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    NSMutableArray *_storageSpecifiers;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
}

- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)usageStorageSpecifiers;

@end
