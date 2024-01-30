@class SPSearchQueryContext, NSString, SPSearchQuery, SPClientSession, NSMutableArray, SPDaemonQueryToken;

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
@property (retain) SPSearchQueryContext *previousQueryContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)contactEntityFromQueryContext:(id)a0;

- (id)searchString;
- (void)clear;
- (id)unsafeSessionEntityString;
- (id)unsafeSections;
- (id)searchThroughSection;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)searchDaemonQuery:(id)a0 gotResultSet:(id)a1 replace:(BOOL)a2 partiallyComplete:(BOOL)a3 update:(BOOL)a4 complete:(BOOL)a5 delayedTopHit:(BOOL)a6 unchanged:(BOOL)a7 forceStable:(BOOL)a8 blendingDuration:(double)a9 geoEntityString:(id)a10 supportedAppScopes:(id)a11 showMoreInAppInfo:(id)a12;
- (void)searchDaemonRankingLog:(id)a0;
- (void)searchDaemonQuery:(id)a0 encounteredError:(id)a1;
- (id)initForSession:(id)a0 withQuery:(id)a1;
- (id)buildSectionWithResult:(id)a0 sectionBundleId:(id)a1 sectionTitleKey:(id)a2;
- (id)searchStringWithEntityFallback;
- (id)buildResultsInSections:(id)a0 isUniversalSearchEnabled:(BOOL)a1;
- (id)buildHeaderContactSectionWithResultBuilder:(id)a0;
- (id)buildCollectionResultWithSection:(id)a0 queryContext:(id)a1;
- (id)buildSocialMediaContactSectionWithResultBuilder:(id)a0;
- (id)buildFooterContactSectionWithResultBuilder:(id)a0;
- (void)updateResultsWithContactHeader;
- (void)truncateSuggestionsSectionToFit:(id)a0;
- (void)handleOptionsForNewSections:(id)a0;
- (void)mergeSections;
- (id)defaultSearchThroughSection;
- (id)resultWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
- (void)addSections:(id)a0 delayedTopHit:(BOOL)a1;
- (id)buildResultsInSections:(id)a0;
- (void)clearInternal:(int)a0 invalidate:(BOOL)a1;

@end
