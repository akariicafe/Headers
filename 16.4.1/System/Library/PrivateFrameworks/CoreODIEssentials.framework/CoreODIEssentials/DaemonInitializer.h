@class NSObject, _TtC17CoreODIEssentials20ODIXPCStreamListener, _TtC17CoreODIEssentials29ODISystemNotificationListener;
@protocol OS_os_log;

@interface DaemonInitializer : NSObject {
    NSObject<OS_os_log> *_defaultLog;
}

@property (copy, nonatomic) _TtC17CoreODIEssentials29ODISystemNotificationListener *systemNotificationListener;
@property (copy, nonatomic) _TtC17CoreODIEssentials20ODIXPCStreamListener *xpcStreamListener;

- (id)init;
- (void).cxx_destruct;
- (void)setupListeners;
- (void)performLaunchTasks;
- (void)registerBackgroundActivities;
- (void)startManagersWithDelegates;

@end
