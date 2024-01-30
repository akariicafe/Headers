@class NSString, SBSRemoteAlertHandle, UIViewController;

@interface HUHomeControlServiceManager : NSObject <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (nonatomic) unsigned long long suspendedServiceClientCount;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)_launchServiceWithContext:(id)a0;
- (void)_launchViewServiceSuspended;
- (void)_presentAlertForError:(id)a0;
- (void)dismissService;
- (void)launchServiceSuspendedWithUserInfo:(id)a0;
- (void)launchServiceWithContext:(id)a0;

@end
