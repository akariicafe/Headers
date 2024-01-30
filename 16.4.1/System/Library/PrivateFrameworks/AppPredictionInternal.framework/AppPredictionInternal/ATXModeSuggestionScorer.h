@class ATXConfiguredModeService, NSString, NSArray, BMUserFocusComputedModeStream, BMAppLaunchStream, DNDModeConfiguration, ATXActivitySuggestionFeedbackStream, ATXActivitySuggestionsFeedbackHistogramHelper, NSNumber;

@interface ATXModeSuggestionScorer : NSObject {
    NSString *_modeUUID;
    unsigned long long _modeType;
    long long _origin;
    NSString *_originAnchorType;
    NSString *_originBundleId;
    double _confidenceScore;
    double _secondsSinceSuggested;
    NSArray *_triggers;
    ATXConfiguredModeService *_configuredModeService;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
    BMAppLaunchStream *_appLaunchStream;
    BMUserFocusComputedModeStream *_groundTruthModeStream;
    NSNumber *_feedbackScore;
    NSNumber *_rejectionsInPastWeek;
    NSNumber *_totalRejections;
    NSNumber *_totalIgnores;
    NSNumber *_timesShownInLastDay;
    NSNumber *_cachedIsUserCurrentlyInMode;
    NSNumber *_cachedIsUserCurrentlyInADifferentMode;
    NSNumber *_cachedIsModeConfigured;
    DNDModeConfiguration *_cachedDNDMode;
}

@property (readonly, nonatomic) BOOL isModeConfigured;
@property (readonly, nonatomic) BOOL isUserCurrentlyInMode;
@property (readonly, nonatomic) BOOL isUserCurrentlyInADifferentMode;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) BOOL shouldSuggestOnLockScreen;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) BOOL shouldAllowSmartEntry;

+ (BOOL)_areConfiguredTriggers:(id)a0 conflictingWithSuggestedTriggers:(id)a1;

- (void).cxx_destruct;
- (id)_scoringWeights;
- (id)_lockScreenSuggestionThresholds;
- (void)_populateFeedbackScoresIfNeeded;
- (BOOL)_hasHadEarlyExitTodayForModeWithUUID:(id)a0;
- (BOOL)_hasLaunchedAppOnAtLeastTwoSeparateDays;
- (BOOL)_hasUserSetUpModeBefore;
- (BOOL)_inValidLocaleForDrivingSuggestions;
- (BOOL)_isSameActivityAndSource:(id)a0;
- (BOOL)_isUserCurrentlyInDifferentModeFromSuggestedMode:(id)a0;
- (BOOL)_isUserCurrentlyInSuggestedMode:(id)a0;
- (void)_populateCachedDataAboutUsersCurrentMode;
- (void)_populateFeedbackScores;
- (id)initWithModeUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7;
- (id)initWithModeUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 configuredModeService:(id)a8 feedbackStream:(id)a9 feedbackHistogramHelper:(id)a10 appLaunchStream:(id)a11 groundTruthModeStream:(id)a12;

@end
