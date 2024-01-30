@class NSDate, NSString, NSArray, WBSKnownTrackingThirdParty, NSSet, NSMutableArray, WBSHistory, NSObject, WBSKnownTrackerFilter;
@protocol OS_dispatch_queue;

@interface WBSPrivacyReportData : NSObject <WBSPrivacyReportDataProvider> {
    NSObject<OS_dispatch_queue> *_dataPrefetchQueue;
    long long _prefetchState;
    NSMutableArray *_prefetchCompletionHandlers;
    WBSKnownTrackerFilter *_knownTrackerFilter;
    NSSet *_firstPartiesFromHistory;
    NSDate *_dataWindowStartDate;
    NSDate *_dataWindowEndDate;
}

@property (retain, nonatomic) WBSHistory *history;
@property (readonly, nonatomic) NSArray *knownTrackers;
@property (retain, nonatomic) NSArray *knownTrackersSortDescriptors;
@property (readonly, nonatomic) NSArray *trackedFirstParties;
@property (retain, nonatomic) NSArray *trackedFirstPartiesSortDescriptors;
@property (readonly, nonatomic) WBSKnownTrackingThirdParty *mostSeenKnownTracker;
@property (readonly, nonatomic) NSSet *trackerOwnerNames;
@property (readonly, nonatomic) double ratioOfTrackedFirstPartiesToAllVisited;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getKnownTrackingDomainsForWebView:(id)a0 after:(id)a1 before:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void)_computeStatistics;
- (id)initWithHistory:(id)a0;
- (void)_resetKnownTrackersSortDescriptors;
- (void)_resetTrackedFirstPartiesSortDescriptors;
- (void)_sortKnownTrackers;
- (void)_sortTrackedFirstParties;
- (void)_prefetchData;
- (void)_executePrefetchCompletionHandlers;
- (void)_loadDataWithCompletionHandler:(id /* block */)a0;
- (void)_discardPrefetchedData;
- (id)_dataWindowStartWithLoadedThirdParties:(id)a0 boundBy:(id)a1;
- (id)_dataWindowStartWithBlockedThirdParties:(id)a0 boundBy:(id)a1;
- (id)getRecentFirstPartiesFromThirdParty:(id)a0;
- (void)_ingestPreventedThirdParties:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addPrefetchCompletionHandler:(id /* block */)a0;
- (void)loadDataFromStartDate:(id)a0 toEndDate:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)prefetchData;
- (void)discardPrefetchedData;

@end
