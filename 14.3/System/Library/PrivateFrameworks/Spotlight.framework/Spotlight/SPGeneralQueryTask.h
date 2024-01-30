@class NSString, SPSearchQuery, SPClientSession, NSMutableArray, SPDaemonQueryToken;

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate> {
    SPClientSession *_session;
    SPDaemonQueryToken *_token;
    BOOL _started;
    BOOL _newQuery;
    BOOL _didReceiveCompleteCallback;
    NSString *_mutableSessionEntityString;
}

@property (readonly) SPSearchQuery *query;
@property (retain) NSMutableArray *mutableSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)searchString;
- (void)clear;
- (void).cxx_destruct;
- (void)searchDaemonRankingLog:(id)a0;
- (id)unsafeSections;
- (void)searchDaemonQuery:(id)a0 gotResultSet:(id)a1 replace:(BOOL)a2 partiallyComplete:(BOOL)a3 update:(BOOL)a4 complete:(BOOL)a5 delayedTopHit:(BOOL)a6 unchanged:(BOOL)a7 forceStable:(BOOL)a8 blendingDuration:(double)a9 geoEntityString:(id)a10 supportedAppScopes:(id)a11 showMoreInAppInfo:(id)a12;
- (void)searchDaemonQuery:(id)a0 encounteredError:(id)a1;
- (id)searchThroughSection;
- (id)unsafeSessionEntityString;
- (void)start;
- (id)initForSession:(id)a0 withQuery:(id)a1;
- (void)truncateSuggestionsSectionToFit:(id)a0;
- (void)handleOptionsForNewSections:(id)a0;
- (void)mergeSections;
- (id)defaultSearchThroughSection;
- (id)resultWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
- (void)addSections:(id)a0 delayedTopHit:(BOOL)a1;
- (void)clearInternal:(int)a0 invalidate:(BOOL)a1;

@end
