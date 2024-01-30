@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIAlarmsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onAlarm;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAlarm;

+ (id)alarmsWithExtensionIdentifier:(id)a0 runtime:(id)a1;
+ (BOOL)_isAlarmInfoValidWithName:(id)a0 alarmInfo:(id)a1;
+ (BOOL)_isAlarmInfoValid:(id)a0;

- (void).cxx_destruct;
- (void)createAlarmWithName:(id)a0 alarmInfo:(id)a1 browserContextController:(id)a2;
- (void)getAlarmWithName:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)getAllAlarmsWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)clearAlarmWithName:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)clearAllAlarmsWithBrowserContextController:(id)a0 completionHandler:(id)a1;

@end
