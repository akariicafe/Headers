@class NSString, TVRViewServiceConfigContext, SBSRemoteAlertHandle;

@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) TVRViewServiceConfigContext *viewServiceContext;
@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)prewarm;
- (void)dismiss;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_launchViewServiceSuspended;
- (void)presentWithContext:(id)a0;
- (id)_actionForSetting:(unsigned long long)a0 animationBlock:(id /* block */)a1;
- (void)_prewarmWithLaunchViewService:(BOOL)a0 fetchActiveEndpoint:(BOOL)a1;
- (void)_fetchActiveEndpointUID;
- (id)_settingNameForValue:(unsigned long long)a0;

@end
