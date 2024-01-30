@class NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, CXCallSourceDelegate, CXProviderVendorProtocol;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<CXProviderVendorProtocol> vendorProtocolDelegate;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (weak, nonatomic) id<CXCallSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;
- (oneway void)registerWithConfiguration:(id)a0;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)a0;
- (void)reportAudioFinishedForCallWithUUID:(id)a0 reply:(id /* block */)a1;
- (oneway void)reportCallWithUUID:(id)a0 changedFrequencyData:(id)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 changedFrequencyData:(id)a1 forDirection:(long long)a2 reply:(id /* block */)a3;
- (oneway void)reportCallWithUUID:(id)a0 changedMeterLevel:(float)a1 forDirection:(long long)a2;
- (void)reportCallWithUUID:(id)a0 changedMeterLevel:(float)a1 forDirection:(long long)a2 reply:(id /* block */)a3;
- (oneway void)reportCallWithUUID:(id)a0 crossDeviceIdentifier:(id)a1 changedBytesOfDataUsed:(long long)a2;
- (void)reportCallWithUUID:(id)a0 crossDeviceIdentifier:(id)a1 changedBytesOfDataUsed:(long long)a2 reply:(id /* block */)a3;
- (oneway void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2 failureContext:(id)a3;
- (void)reportCallWithUUID:(id)a0 endedAtDate:(id)a1 privateReason:(long long)a2 failureContext:(id)a3 reply:(id /* block */)a4;
- (oneway void)reportCallWithUUID:(id)a0 updated:(id)a1;
- (void)reportCallWithUUID:(id)a0 updated:(id)a1 reply:(id /* block */)a2;
- (oneway void)reportNewIncomingCallWithUUID:(id)a0 update:(id)a1 reply:(id /* block */)a2;
- (oneway void)reportNewOutgoingCallWithUUID:(id)a0 update:(id)a1;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 connectedAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 connectedAtDate:(id)a1 reply:(id /* block */)a2;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 sentInvitationAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 sentInvitationAtDate:(id)a1 reply:(id /* block */)a2;
- (oneway void)reportOutgoingCallWithUUID:(id)a0 startedConnectingAtDate:(id)a1;
- (void)reportOutgoingCallWithUUID:(id)a0 startedConnectingAtDate:(id)a1 reply:(id /* block */)a2;
- (oneway void)requestTransaction:(id)a0 completionHandler:(id /* block */)a1;

@end
