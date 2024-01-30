@class NSString, SBSRemoteAlertHandle;

@interface HUHomeControlServiceManager : NSObject <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (nonatomic) unsigned long long suspendedServiceClientCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)dismissService;
- (void)launchServiceWithContext:(id)a0;
- (void)_launchServiceWithUserInfo:(id)a0;
- (void)_launchViewServiceSuspended;
- (void)launchServiceSuspendedWithUserInfo:(id)a0;

@end
