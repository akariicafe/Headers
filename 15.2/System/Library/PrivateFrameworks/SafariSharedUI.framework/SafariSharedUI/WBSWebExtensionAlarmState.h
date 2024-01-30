@class NSMutableDictionary;

@interface WBSWebExtensionAlarmState : NSObject {
    NSMutableDictionary *_alarms;
}

+ (id)_alarmInfoWithName:(id)a0 alarmInfo:(id)a1;

- (void).cxx_destruct;
- (void)createAlarmWithName:(id)a0 alarmInfo:(id)a1 extension:(id)a2;
- (void)getAlarmWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllAlarmsWithCompletionHandler:(id /* block */)a0;
- (void)clearAlarmWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAlarms;

@end
