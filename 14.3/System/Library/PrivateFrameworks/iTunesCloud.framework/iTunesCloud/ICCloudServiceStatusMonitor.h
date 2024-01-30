@class NSObject, NSString, NSXPCConnection, NSMutableSet, NSError, NSUUID, ICCloudServerListenerEndpointProvider;
@protocol OS_dispatch_source;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient> {
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    long long _privacyAcknowledgementPolicy;
    BOOL _isObservingCloudServiceStatus;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    unsigned long long _capabilities;
    BOOL _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long privacyAcknowledgementPolicy;
@property (readonly, getter=isObservingCloudServiceStatus) BOOL observingCloudServiceStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (void)_beginObservingCloudServiceStatus;
- (void)beginObservingCloudServiceStatus;
- (void)_endObservingCloudServiceStatusWithToken:(id)a0;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)a0 requestCapabilitiesWithCompletionHandler:(id /* block */)a1;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)_didEndRequestingUserTokenWithTransactionIdentifier:(id)a0;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)a0 requestHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_updateWithCapabilities:(unsigned long long)a0 hasValidCapabilities:(BOOL)a1 transactionIdentifier:(id)a2;
- (void)_updateWithStorefrontCountryCode:(id)a0 transactionIdentifier:(id)a1;
- (void)_updateWithStorefrontIdentifier:(id)a0 transactionIdentifier:(id)a1;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(BOOL)a0;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)a0 error:(id *)a1;
- (id)_handleCloudServiceStatusMonitorConnectionRemoteObjectProxyError:(id)a0 forRequestWithDescription:(id)a1 transactionIdentifier:(id)a2;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (void)_recoverObservingCloudServiceStatus;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)_refreshCloudServiceStatus;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_cancelCloudServerLaunchedNotifyToken;
- (void)endObservingCloudServiceStatus;
- (void)requestUserTokenForDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)storefrontCountryCodeDidChange:(id)a0;
- (void)storefrontIdentifierDidChange:(id)a0;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)capabilitiesDidChange:(unsigned long long)a0;

@end
