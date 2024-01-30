@class NSString;
@protocol CXProviderExtensionVendorContextDelegate;

@interface CXProviderExtensionVendorContext : CXProviderExtensionContext <CXProviderHostProtocol, CXProviderVendorProtocol>

@property (weak, nonatomic) id<CXProviderExtensionVendorContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;
- (oneway void)registerWithConfiguration:(id)a0;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)a0;
- (oneway void)reportCallWithUUID:(id)a0 changedFrequencyData:(id)a1 forDirection:(long long)a2;
- (oneway void)reportCallWithUUID:(id)a0 changedMeterLevel:(float)a1 forDirection:(long long)a2;
- (oneway void)reportCallWithUUID:(id)a0 crossDeviceIdentifier:(id)a1 changedBytesOfDataUsed:(long long)a2;
- (oneway void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2 failureContext:(id)a3;
- (oneway void)reportCallWithUUID:(id)a0 updated:(id)a1;
- (oneway void)reportNewIncomingCallWithUUID:(id)a0 update:(id)a1 reply:(id /* block */)a2;
- (oneway void)reportNewOutgoingCallWithUUID:(id)a0 update:(id)a1;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 connectedAtDate:(id)a1;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 sentInvitationAtDate:(id)a1;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 startedConnectingAtDate:(id)a1;
- (oneway void)requestTransaction:(id)a0 completionHandler:(id /* block */)a1;

@end
