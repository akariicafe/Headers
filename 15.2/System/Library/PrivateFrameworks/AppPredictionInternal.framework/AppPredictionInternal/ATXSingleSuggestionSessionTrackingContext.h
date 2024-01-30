@class NSUUID, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface ATXSingleSuggestionSessionTrackingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *mostRecentHomescreenBlendingCacheUUID;
@property (retain, nonatomic) NSUUID *mostRecentAppSpotlightBlendingCacheUUID;
@property (retain, nonatomic) NSUUID *mostRecentActionSpotlightBlendingCacheUUID;
@property (retain, nonatomic) NSMutableSet *suggestionsWidgetIds;
@property (retain, nonatomic) NSMutableSet *appPredictionPanelIds;
@property (retain, nonatomic) NSMutableDictionary *mostRecentClientCacheUpdateUUIDByClientModelId;
@property (retain, nonatomic) NSMutableDictionary *currentlyTrackedSessions;
@property (retain, nonatomic) NSMutableArray *completedSessions;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)removeStoredCompletedSessionsAndReturnCompletedSessionsCopy;
- (id)initWithMostRecentlySeenHomescreenBlendingCacheUUID:(id)a0 mostRecentAppSpotlightBlendingCacheUUID:(id)a1 mostRecentActionSpotlightBlendingCacheUUID:(id)a2 suggestionsWidgetIds:(id)a3 appPredictionPanelIds:(id)a4 mostRecentClientCacheUpdateUUIDByClientModelId:(id)a5 currentlyTrackedSessions:(id)a6 completedSessions:(id)a7;
- (void)_tryPruneSingleSuggestionSessionsIfOverMaxNum;
- (id)clientModelIdsToConsider;
- (id)_persistentIdentifierForSuggestion:(id)a0;
- (void)_tryMarkCurrentlyTrackedSessionsAsCompleteWithEventDate:(id)a0;
- (void)_updateSingleSuggestionSessionsWithSpotlightUIEvent:(id)a0;
- (void)_updateSingleSuggestionSessionsWithHomeScreenUIEvent:(id)a0;
- (void)_updateCurrentlyTrackedSessionsWithSessionStatus:(unsigned long long)a0 consumerSubType:(unsigned char)a1 suggestionUUIDs:(id)a2 blendingCacheUUID:(id)a3;
- (BOOL)isEqualToATXSingleSuggestionSessionTrackingContext:(id)a0;

@end
