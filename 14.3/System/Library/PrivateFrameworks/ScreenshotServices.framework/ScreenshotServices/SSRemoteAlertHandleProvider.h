@class NSString, SBSRemoteAlertHandle;
@protocol SSRemoteAlertHandleProviderDelegate;

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle *_handle;
}

@property (readonly, nonatomic) BOOL isActive;
@property (weak, nonatomic) id<SSRemoteAlertHandleProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preheat;
- (void)prepare;
- (id)init;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)activate;
- (void)invalidate;
- (id)screenshotServicesAlertHandle;
- (void)_callDelegate:(id /* block */)a0;
- (id)_screenshotServicesServiceAlertDefinition;

@end
