@class NSUserDefaults, NSDate;
@protocol ATXPETEventTracker2Protocol;

@interface ATXUpdatePredictionsLogger : NSObject {
    NSUserDefaults *_userDefaults;
    id<ATXPETEventTracker2Protocol> _petLogger;
}

@property (retain, nonatomic) NSDate *now;

- (void)countPredictionUpdateWithReason:(unsigned long long)a0 client:(unsigned long long)a1;
- (id)_protobufForTriggerType:(int)a0 client:(unsigned long long)a1;
- (id)_lastLogDate;
- (void)_setLastLogDate:(id)a0;
- (void)_resetCountDictionariesForAllClients;
- (void)_setCountDictionary:(id)a0 forClient:(unsigned long long)a1;
- (double)_normalizeCountPer24HoursWithStartDate:(id)a0 endDate:(id)a1 count:(unsigned long long)a2;
- (int)_clientTypeForUpdatePredictionsClient:(unsigned long long)a0;
- (id)_countDictionaryForClient:(unsigned long long)a0;
- (void)flushCountedPredictionUpdatesToLogger;
- (void).cxx_destruct;
- (id)init;
- (void)_incrementCountInDictionary:(id)a0 forTriggerType:(int)a1;
- (int)_triggerTypeForUpdatePredictionsReason:(unsigned long long)a0;
- (id)initWithUserDefaults:(id)a0 petLogger:(id)a1;
- (void)_logPredictionUpdatesForClient:(unsigned long long)a0 lastLogDate:(id)a1 now:(id)a2;
- (id)_stringForATXUpdatePredictionsClient:(unsigned long long)a0;
- (id)_countDictionaryDefaultsKeyForClient:(unsigned long long)a0;

@end
