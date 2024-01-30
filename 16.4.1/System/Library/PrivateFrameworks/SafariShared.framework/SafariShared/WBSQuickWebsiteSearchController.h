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
@property (readonly, copy, nonatomic) NSArray *quickWebsiteSearchHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)savePendingChangesBeforeTermination;
- (id)_dictionaryRepresentation;
- (void)_loadFromDisk;
- (void)clear;
- (void).cxx_destruct;
- (id)_initWithSearchDescriptionsURL:(id)a0;
- (void)_saveToDiskSoon;
- (id)providerForSourcePageURLString:(id)a0;
- (void)_addHost:(id)a0 toOpenSearchDescriptionWithDocumentURL:(id)a1;
- (void)_didCollectOpenSearchDescription:(id)a0;
- (void)_didFinishLoadingFromDisk;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)a0;
- (void)_removeHost:(id)a0 fromOpenSearchDescriptionWithDocumentURL:(id)a1;
- (void)_resetCachedDataWithCompletionHandler:(id /* block */)a0;
- (void)_sendNotification:(id)a0 forQuickWebsiteSearchProvider:(id)a1;
- (BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)a0;
- (void)beginLoadingFromDiskIfNeeded;
- (void)didPerformSearchWithProvider:(id)a0;
- (void)noteProvidersAreStale;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)a0;
- (id)providersMatchingQueryString:(id)a0;
- (id)providersMatchingString:(id)a0;
- (id)quickWebsiteSearchProvider:(id)a0 openSearchDescriptionForOpenSearchDescriptionURLString:(id)a1;
- (void)removeProviderWithHost:(id)a0;
- (void)removeProvidersAddedAfterDate:(id)a0 beforeDate:(id)a1;
- (void)removeProvidersWithHosts:(id)a0;
- (void)setOpenSearchDescriptionURLString:(id)a0 forSourcePageURLString:(id)a1;
- (void)setSearchURLTemplateFromForm:(id)a0 forSourcePageURLString:(id)a1;

@end
