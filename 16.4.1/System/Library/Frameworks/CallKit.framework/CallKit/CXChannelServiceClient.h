@class NSString;
@protocol CXChannelServiceClientDelegate;

@interface CXChannelServiceClient : CXServiceClient <CXChannelProviderHostProtocol, CXChannelProviderVendorProtocol>

@property (weak, nonatomic) id<CXChannelServiceClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPermittedToUsePublicAPI;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;
- (oneway void)registerWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)reportAudioFinishedForChannelWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)reportChannelWithUUID:(id)a0 connectedAtDate:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)reportChannelWithUUID:(id)a0 disconnectedAtDate:(id)a1 disconnectedReason:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)reportChannelWithUUID:(id)a0 startedConnectingAtDate:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)reportChannelWithUUID:(id)a0 updated:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)reportIncomingTransmissionEndedForChannelWithUUID:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)reportIncomingTransmissionStartedForChannelWithUUID:(id)a0 update:(id)a1 shouldReplaceOutgoingTransmission:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)requestTransaction:(id)a0 completionHandler:(id /* block */)a1;

@end
