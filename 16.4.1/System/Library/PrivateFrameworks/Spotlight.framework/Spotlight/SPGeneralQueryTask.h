@class NSString, NSArray, SPClientSession;

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate>

@property (retain, nonatomic) NSString *mutableSessionEntityString;
@property (retain, nonatomic) NSArray *showMoreInAppInfo;
@property BOOL didReceiveCompleteCallback;
@property BOOL newQuery;
@property (retain) NSArray *supportedAppScopes;
@property (weak) SPClientSession *session;
@property BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)contactEntityFromQueryContext:(id)a0;

- (id)displayedText;
- (id)unsafeSessionEntityString;
- (void)cancel;
- (id)unsafeSections;
- (id)searchString;
- (void)start;
- (void)clear;
- (void).cxx_destruct;
- (id)bundleIdentifiersForHiddenSections;
- (void)searchDaemonQuery:(id)a0 encounteredError:(id)a1;
- (void)searchDaemonQuery:(id)a0 gotResultSet:(id)a1 replace:(BOOL)a2 partiallyComplete:(BOOL)a3 update:(BOOL)a4 complete:(BOOL)a5 delayedTopHit:(BOOL)a6 unchanged:(BOOL)a7 forceStable:(BOOL)a8 blendingDuration:(double)a9 geoEntityString:(id)a10 supportedAppScopes:(id)a11 showMoreInAppInfo:(id)a12;
- (void)searchDaemonRankingLog:(id)a0;
- (void)addAsYouTypeRelatedSearchResultToSections:(id)a0 withRelatedSearchSection:(id)a1;
- (void)addSections:(id)a0 delayedTopHit:(BOOL)a1;
- (id)buildCollectionResultWithSection:(id)a0 queryContext:(id)a1;
- (id)buildFooterContactSectionWithResultBuilder:(id)a0;
- (id)buildHeaderContactSectionWithResultBuilder:(id)a0;
- (id)buildResultsInSections:(id)a0;
- (id)buildSectionWithResult:(id)a0 sectionBundleId:(id)a1 sectionTitleKey:(id)a2;
- (id)buildSocialMediaContactSectionWithResultBuilder:(id)a0;
- (void)handleOptionsForNewSections:(id)a0;
- (id)initForSession:(id)a0 withQuery:(id)a1;
- (id)makeSearchThroughSuggestions;
- (void)mergeSections;
- (void)processAppResults:(id)a0 maxAppResults:(unsigned long long)a1 section:(id)a2 topHitsIndex:(unsigned long long *)a3;
- (BOOL)readyToUpdate;
- (id)searchStringWithEntityFallback;
- (id)showMoreButtonResultSection;
- (void)truncateSuggestionsSectionToFit:(id)a0;
- (void)updateResultsWithContactHeader;

@end
