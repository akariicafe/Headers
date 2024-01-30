@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GKRemoteAlertLauncher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *launchTimeoutTimer;
@property (readonly, nonatomic) BOOL isLaunching;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelLaunchTimeoutTimer;
- (void)launchBypassingPreAuthentication:(BOOL)a0 forGame:(id)a1 hostPID:(int)a2 deeplink:(id)a3 observer:(id)a4;
- (void)notifyDashboardDidLaunch;
- (void)startLaunchTimeoutTimer;

@end
