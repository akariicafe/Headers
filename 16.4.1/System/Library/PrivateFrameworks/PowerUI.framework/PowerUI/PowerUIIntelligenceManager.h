@class NSString, PowerUITrialManager, NSDictionary, _OSChargingPredictor, NSObject, PowerUINotificationManager;
@protocol OS_os_log, _CDContext, _DKKnowledgeQuerying;

@interface PowerUIIntelligenceManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PowerUINotificationManager *notificationManager;
@property (retain, nonatomic) id<_CDContext> context;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) _OSChargingPredictor *chargingPredictor;
@property (retain, nonatomic) NSDictionary *lastPluginPredictionInfo;

- (void)handleCallback;
- (void).cxx_destruct;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withKnowledgeStore:(id)a2 withTrialManager:(id)a3;
- (void)postAnalyticsEventForNewEventTypeWithPredictedDurationMinutes:(long long)a0 andActualDurationMinutes:(long long)a1 andConfidence:(double)a2 andWasWireless:(BOOL)a3 andPredictionScheme:(id)a4;
- (void)postAnalyticsEventForOldEventTypeWithPredictedDurationMinutes:(long long)a0 andActualDurationMinutes:(long long)a1;
- (void)postPluginNotificationWithPredictorOutput:(id)a0 andError:(id)a1 andState:(id)a2;
- (id)queryPredictedPlugoutDate;
- (void)removePluginNotification;
- (id)ttrURLforBadPredictionsWithStateDictionary:(id)a0;

@end
