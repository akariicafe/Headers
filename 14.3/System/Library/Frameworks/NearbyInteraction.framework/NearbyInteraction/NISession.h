@class NSUUID, NSString, NSError, NIConfiguration, NSDictionary, NIServerConnection, NSObject, NIExportedObjectForwarder, NIDiscoveryToken;
@protocol NISessionDelegate, NIInternalSessionDelegate, OS_os_log, OS_dispatch_queue;

@interface NISession : NSObject <UWBSessionDelegateProxyProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    NSUUID *_internalID;
    NIServerConnection *_connection;
    NIExportedObjectForwarder *_exportedObjectForwarder;
    NIConfiguration *_currentConfiguration;
    struct vector<UWBSessionInterruptionBookkeeping, std::__1::allocator<UWBSessionInterruptionBookkeeping> > { struct UWBSessionInterruptionBookkeeping *__begin_; struct UWBSessionInterruptionBookkeeping *__end_; struct __compressed_pair<UWBSessionInterruptionBookkeeping *, std::__1::allocator<UWBSessionInterruptionBookkeeping> > { struct UWBSessionInterruptionBookkeeping *__value_; } __end_cap_; } _interruptions;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _readyForCallbacks;
    NSObject<OS_os_log> *_log;
    double _startTime;
    double _duration;
    BOOL _updatedNearbyObjects;
}

@property (class, retain) NSDictionary *cachedDeviceCapabilities;
@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property int internalState;
@property (retain) NSError *invalidationError;
@property (retain) NSDictionary *activationResponse;
@property (weak) id<NIInternalSessionDelegate> internalDelegate;
@property (weak, nonatomic) id<NISessionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (readonly, copy, nonatomic) NIConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_oneShotConnection:(BOOL)a0;
+ (void)_queryAndCacheCapabilities;
+ (BOOL)_supportedPlatform:(id)a0;

- (id)init;
- (void)_addObject:(id)a0;
- (void).cxx_destruct;
- (void)runWithConfiguration:(id)a0;
- (void)_logTime;
- (void)_removeObject:(id)a0;
- (void)pause;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)_remoteObject;
- (void)_activate:(BOOL)a0;
- (void)invalidate;
- (void)_serverConnectionInterrupted;
- (void)_serverConnectionInvalidated;
- (void)_activateSyncOnConnectionQueue;
- (void)_shareSandboxExtensionForCurrentBundle;
- (id)_initAndConnectToServer;
- (id)_getSessionFailureError;
- (void)_notifyDidInvalidateWithError:(id)a0;
- (void)_reinterruptSessionWithCachedInterruption;
- (id)_synchronousRemoteObject;
- (void)_handleRunSessionError:(id)a0;
- (void)_handleRunSessionSuccess;
- (void)_notifySessionHasFailed;
- (void)_pauseInternalOnConnectionQueue:(BOOL)a0;
- (void)_invalidateInternalOnConnectionQueue:(BOOL)a0;
- (void)_activateAsync;
- (void)_handleActivationError:(id)a0;
- (void)_handleActivationSuccess:(id)a0;
- (void)_invalidateSessionInternalWithError:(id)a0;
- (void)_performBlockOnDelegateQueue:(id /* block */)a0 ifRespondsToSelector:(SEL)a1;
- (void)_handleCommandUnsupportedPlatform;
- (void)_interruptSessionWithInternalReason:(long long)a0 onConnectionQueue:(BOOL)a1;
- (void)_handlePauseSessionError:(id)a0;
- (void)_handlePauseSessionSuccess;
- (void)_logDurationAndSubmit:(BOOL)a0;
- (void)uwbSystemDidChangeState:(unsigned long long)a0;
- (void)_performBlockOnDelegateQueue:(id /* block */)a0 ifRespondsToSelector:(SEL)a1 evenIfNotRunning:(BOOL)a2;
- (BOOL)_isInternalClient;
- (id)_verifyError:(id)a0;
- (void)_submitErrorMetric:(id)a0;
- (void)uwbSessionDidFailWithError:(id)a0;
- (void)uwbSessionDidInvalidateWithError:(id)a0;
- (void)didUpdateNearbyObjects:(id)a0;
- (void)didRemoveNearbyObjects:(id)a0 withReason:(unsigned long long)a1;
- (void)uwbSessionInterruptedWithReason:(long long)a0 timestamp:(double)a1;
- (void)uwbSessionInterruptionReasonEnded:(long long)a0 timestamp:(double)a1;
- (void)didDiscoverNearbyObject:(id)a0;
- (void)object:(id)a0 didUpdateRegion:(id)a1 previousRegion:(id)a2;
- (void)setConfigurationForTesting:(id)a0;
- (void)_addRegionPredicate:(id)a0;
- (void)_removeRegionPredicate:(id)a0;

@end
