@class NSString, SBSApplicationUserQuitMonitor, NSObject;
@protocol OS_os_log;

@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate> {
    SBSApplicationUserQuitMonitor *_monitor;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMonitoredBundleIdentifier:(id)a0;
- (void)start;
- (void)quitMonitor:(id)a0 userClosedLastSceneOfApplicationWithBundleID:(id)a1;
- (void)invalidate;

@end
