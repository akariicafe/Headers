@class SFStartLocalSearchFeedback, PARSession, NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MSParsecSearchSession : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) PARSession *session;
@property (nonatomic) long long currentQueryID;
@property (readonly, nonatomic) NSMutableArray *currentFeedback;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentLocalSearchFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSession;

- (id)init;
- (void).cxx_destruct;
- (void)reportFeedback:(id)a0;
- (void)reportQueryWithRestrictedComponents:(id)a0 triggerEvent:(unsigned long long)a1 hasCurrentMailboxScope:(BOOL)a2 searchViewAppeared:(BOOL)a3;
- (void)reportLocalSearchEnded;
- (id)_categoryOrder;
- (id)_sectionFeedbackForBundleIdentifier:(id)a0 results:(id)a1;
- (void)sendLogsToSettings;
- (void)reportSearchViewAppeared:(BOOL)a0 currentMailboxScope:(BOOL)a1;
- (void)reportQueryWithRestrictedComponents:(id)a0 triggerEvent:(unsigned long long)a1 hasCurrentMailboxScope:(BOOL)a2;
- (void)reportSuggestionsFetched:(id)a0;
- (void)reportSuggestionsVisible:(id)a0;
- (void)reportTopHitSelected:(id)a0;
- (void)reportSuggestionSelected:(id)a0;
- (void)reportMessageListResultsFetched:(id)a0 isFinished:(BOOL)a1;
- (void)reportMessageListResultsVisible:(id)a0;
- (void)reportMessageListResultEngaged:(id)a0 engagementAction:(long long)a1;
- (void)reportQueryClearedEvent:(long long)a0;
- (void)reportSearchEndedEvent:(long long)a0;

@end
