@class _ATXAppLaunchHistogram, _ATXAggregateLogger, _ATXDataStore, NSObject, NSMutableSet, ATXNotificationsLogger, ATXNotificationsPriors, _ATXAppLaunchCategoricalHistogram;
@protocol OS_dispatch_queue;

@interface ATXNotificationsSuggestion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    _ATXAggregateLogger *_aggdlogger;
    _ATXDataStore *_db;
    ATXNotificationsPriors *_notificationsPriors;
    NSMutableSet *_inmemorycache;
    long long _stype;
}

+ (id)createNotificationIdForSuggestion:(id)a0;
+ (BOOL)isSettingSuggestion:(id)a0;
+ (id)getSuggestionLRModel;
+ (id)createBundleIdentifierForSuggestionWithType:(long long)a0;
+ (id)extractSuggestionTypeStringFromBundleIdentifier:(id)a0;
+ (id)generateAppId:(id)a0 topic:(id)a1;

- (id)getResponses;
- (void)logRTTOutcomeWithBundleId:(id)a0 topic:(id)a1 rttOutcome:(unsigned long long)a2;
- (void)resetResponses;
- (id)initWithSuggestionType:(long long)a0 notificationsHistogram:(id)a1 applaunchHistogram:(id)a2 dataStore:(id)a3 notificationsLogger:(id)a4 aggdlogger:(id)a5;
- (BOOL)checkIfInDB:(id)a0 topic:(id)a1;
- (id)initWithSuggestionType:(long long)a0;
- (BOOL)_checkIfInDB:(id)a0 topic:(id)a1;
- (void)suggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (id)message:(id)a0 topic:(id)a1 response:(long long)a2;
- (void).cxx_destruct;
- (id)initWithSuggestionType:(long long)a0 notificationsHistogram:(id)a1 applaunchHistogram:(id)a2;

@end
