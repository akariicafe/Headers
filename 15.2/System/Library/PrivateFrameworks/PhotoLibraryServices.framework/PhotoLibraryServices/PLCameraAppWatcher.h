@class NSString, PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>

@property (readonly, nonatomic) PLForegroundMonitor *foregroundMonitor;
@property (readonly, nonatomic) BOOL isCameraRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)foregroundMonitor:(id)a0 changedStateToForeground:(BOOL)a1 forBundleIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
