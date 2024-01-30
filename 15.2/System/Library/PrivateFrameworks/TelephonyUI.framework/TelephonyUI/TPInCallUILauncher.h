@class TPProcessObserver, NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, TPProcessObserverDelegate>

@property (class, readonly, nonatomic) TPInCallUILauncher *sharedInCallUILauncher;

@property (retain, nonatomic) TPProcessObserver *processObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)a0;

- (void).cxx_destruct;
- (void)processObserver:(id)a0 bundleIdentifier:(id)a1 didUpdateApplicationRunning:(BOOL)a2;
- (void)launchInCallUIForReason:(long long)a0 withRequestURL:(id)a1 completion:(id /* block */)a2;

@end
