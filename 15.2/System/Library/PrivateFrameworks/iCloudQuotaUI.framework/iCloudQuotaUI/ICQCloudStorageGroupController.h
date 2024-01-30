@class ICQQuotaInfoResponse, NSString, ICQPreferencesRemoteUIDelegate, PSListController, PSCloudStorageOffersManager, PSSpecifier, PSTableCell, NSMutableArray;

@interface ICQCloudStorageGroupController : NSObject <PSCloudStorageOffersManagerDelegate, RUITableViewRowDelegate, CloudStorageGroupControllerProtocol, DelayedPushDelegate> {
    PSListController *_listController;
    NSMutableArray *_specifiers;
    PSSpecifier *_managedStorage;
    BOOL _buyMore;
    BOOL _quotaFetchInProgress;
    BOOL _quotaCached;
    BOOL _quotaFailed;
    BOOL _loadingStorage;
    BOOL _loadingCommerce;
    BOOL _delayedEnterManageStorage;
    ICQQuotaInfoResponse *_quotaInfo;
    ICQPreferencesRemoteUIDelegate *_storageDelegate;
    PSTableCell *_remoteLoadingCell;
    PSCloudStorageOffersManager *_storageOffersManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backupInfoHeaders;

- (void)reachabilityChanged:(id)a0;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)stopSpinner;
- (id)init;
- (void)dealloc;
- (void)groupRemovedFromListController;
- (void)addGroupToListController:(id)a0;
- (id)specifiersWithBuyMore:(BOOL)a0;
- (void)loadStarted:(id)a0;
- (void)loadFinished:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)remoteUIDelegate:(id)a0 didCreatePage:(id)a1 inObjectModel:(id)a2;
- (void)quotaInfoChanged;
- (void)updateManagedStorageState;
- (void)getQuotaInfo;
- (void)enterManagedStorage:(id)a0;
- (BOOL)hasPurchasedMoreStorage;
- (void)clearQuotaCache;
- (id)totalStorage:(id)a0;
- (id)availableStorage:(id)a0;
- (void)enterBuyStorage;
- (void)cancelLoaders;
- (void)startSpinnerInCellForSpecifier:(id)a0;
- (id)sourceURLForRUITableViewRow;
- (void)rowDidEndEditing:(id)a0;
- (void)rowDidChange:(id)a0 action:(int)a1;
- (void)rowIsFirstResponder:(id)a0;
- (id)textFieldRow:(id)a0 changeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (Class)tableCellClassForTableViewRow:(id)a0;
- (void)enterManageStorageWhenPossible;
- (void)enterBuyStorageWhenPossible;

@end
