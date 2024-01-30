@class SFStartLocalSearchFeedback, PARSession, NSString, MSParsecSearchIndexState, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MSParsecSearchSession : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) PARSession *session;
@property (nonatomic) long long currentQueryID;
@property (readonly, nonatomic) NSMutableArray *currentFeedback;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentLocalSearchFeedback;
@property (retain) MSParsecSearchIndexState *indexState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSession;

- (void)reportFeedback:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_categoryOrder;
- (id)_sectionFeedbackForBundleIdentifier:(id)a0 results:(id)a1;
- (void)reportDidGoToCommittedSearch;
- (void)reportLocalSearchEnded;
- (void)reportMessageListResultEngaged:(id)a0 engagementAction:(long long)a1;
- (void)reportMessageListResultsFetched:(id)a0 isFinished:(BOOL)a1;
- (void)reportMessageListResultsVisible:(id)a0;
- (void)reportQueryClearedEvent:(long long)a0;
- (void)reportQueryWithRestrictedComponents:(id)a0 triggerEvent:(unsigned long long)a1 searchType:(unsigned long long)a2 hasCurrentMailboxScope:(BOOL)a3 languages:(id)a4;
- (void)reportQueryWithRestrictedComponents:(id)a0 triggerEvent:(unsigned long long)a1 searchType:(unsigned long long)a2 hasCurrentMailboxScope:(BOOL)a3 searchViewAppeared:(BOOL)a4 languages:(id)a5;
- (void)reportRankingFeedbackForSuggestions:(id)a0;
- (void)reportSearchEndedEvent:(long long)a0;
- (void)reportSearchViewAppeared:(BOOL)a0 currentMailboxScope:(BOOL)a1 languages:(id)a2;
- (void)reportSuggestionSelected:(id)a0;
- (void)reportSuggestionsVisible:(id)a0;
- (void)reportTopHitSelected:(id)a0;
- (void)sendLogsToSettings;

@end
