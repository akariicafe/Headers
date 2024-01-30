@class MTAlarmManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTAlarmManager *_mtAlarmManager;
}

+ (void)warmUp;

- (id)removeAlarm:(id)a0;
- (id)alarms;
- (id)addAlarm:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)checkIn;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)_registeredObservations;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandlerForEvent:(long long)a0;

@end
