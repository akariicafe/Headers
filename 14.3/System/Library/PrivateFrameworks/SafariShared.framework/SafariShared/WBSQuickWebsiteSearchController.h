@class NSArray, NSString, NSURL, NSMutableDictionary, NSObject, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate> {
    NSURL *_searchDescriptionsURL;
    BOOL _hasBegunLoadingFromDisk;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    WBSCoalescedAsynchronousWriter *_writer;
}

@property BOOL quickWebsiteSearchProvidersLoadedFromDisk;
@property (readonly, nonatomic) NSArray *quickWebsiteSearchHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)clear;
- (void)_loadFromDisk;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)_saveToDiskSoon;
- (id)_initWithSearchDescriptionsURL:(id)a0;
- (void)beginLoadingFromDiskIfNeeded;
- (void)_didCollectOpenSearchDescription:(id)a0;
- (void)_didFinishLoadingFromDisk;
- (void)_resetCachedDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)a0;
- (void)_sendNotification:(id)a0 forQuickWebsiteSearchProvider:(id)a1;
- (void)_addHost:(id)a0 toOpenSearchDescriptionWithDocumentURL:(id)a1;
- (void)_removeHost:(id)a0 fromOpenSearchDescriptionWithDocumentURL:(id)a1;
- (void)removeProvidersWithHosts:(id)a0;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)a0;
- (void)noteProvidersAreStale;
- (BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)a0;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (id)quickWebsiteSearchProvider:(id)a0 openSearchDescriptionForOpenSearchDescriptionURLString:(id)a1;
- (void)removeProvidersAddedAfterDate:(id)a0 beforeDate:(id)a1;
- (id)providersMatchingQueryString:(id)a0;
- (void)didPerformSearchWithProvider:(id)a0;
- (void)setSearchURLTemplateFromForm:(id)a0 forSourcePageURLString:(id)a1;
- (void)setOpenSearchDescriptionURLString:(id)a0 forSourcePageURLString:(id)a1;
- (id)providerForSourcePageURLString:(id)a0;
- (void)removeProviderWithHost:(id)a0;
- (id)_dictionaryRepresentation;

@end
