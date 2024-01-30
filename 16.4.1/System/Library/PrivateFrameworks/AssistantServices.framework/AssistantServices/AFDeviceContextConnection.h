@class AFDeviceContext, NSString, NSXPCConnection, AFInstanceContext, _AFDeviceContextServiceDelegateProxy, NSObject;
@protocol OS_dispatch_queue, AFDeviceContextConnectionDelegate;

@interface AFDeviceContextConnection : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    _AFDeviceContextServiceDelegateProxy *_serviceDelegateProxy;
    id<AFDeviceContextConnectionDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
    BOOL _isInvalid;
    BOOL _isUpdatingLocalDeviceContext;
    AFDeviceContext *_localDeviceContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_xpcConnection;
- (void)_handleXPCConnectionInvalidation;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)_remoteServiceWithErrorHandler:(id /* block */)a0;
- (void)_beginUpdateLocalDeviceContext;
- (void)_clearXPCConnection;
- (void)_endUpdateLocalDeviceContext;
- (void)_fetchLocalDeviceContextWithCompletion:(id /* block */)a0;
- (void)_handleXPCConnectionInterruption;
- (void)_updateLocalDeviceContext:(id)a0;
- (void)beginUpdateLocalDeviceContext;
- (void)donateSerializedContextMapByPrivacyClass:(id)a0 withMetadataMap:(id)a1 forType:(id)a2 pushToRemote:(BOOL)a3 completion:(id /* block */)a4;
- (void)endUpdateLocalDeviceContext;
- (void)getLocalDeviceContextWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 instanceContext:(id)a1 delegate:(id)a2;

@end
