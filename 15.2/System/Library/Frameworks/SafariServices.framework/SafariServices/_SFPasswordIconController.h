@class NSMutableDictionary, WBSCache, NSMutableSet, _SFSiteMetadataManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;

@interface _SFPasswordIconController : NSObject {
    WBSCache *_iconCache;
    NSMutableDictionary *_domainsToExtractedBackgroundColors;
    NSMutableSet *_touchIconRequests;
    NSMutableDictionary *_domainToItems;
    NSMutableSet *_domainsThatHaveRequestedIcon;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSObject<OS_dispatch_queue> *_queue;
    _SFSiteMetadataManager *_metadataManager;
    NSMutableDictionary *_domainToAppID;
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;
    BOOL _initializedHistory;
}

@property (weak, nonatomic) id<_SFPasswordIconControllerDelegate> delegate;

+ (struct CGSize { double x0; double x1; })preferredIconSize;

- (void).cxx_destruct;
- (id)initWithMetadataManager:(id)a0;
- (void)clearIconFetchingState;
- (id)iconForDomain:(id)a0;
- (id)backgroundColorForDomain:(id)a0;
- (void)_fetchTouchIconForDomain:(id)a0;
- (void)_requestTouchIconForDomain:(id)a0 iconDownloadingEnabled:(BOOL)a1;
- (void)_checkForLocalVisitToDomain:(id)a0 withCompletion:(id /* block */)a1;
- (void)_populateDomainToItemsWithCompletion:(id /* block */)a0;
- (void)_fetchAppIconForDomain:(id)a0;
- (void)_iconDidUpdateForDomain:(id)a0;
- (void)_populateDomainToAppIDWithCompletion:(id /* block */)a0;

@end
