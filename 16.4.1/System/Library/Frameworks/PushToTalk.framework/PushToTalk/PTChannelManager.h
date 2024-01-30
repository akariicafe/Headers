@class CXCallController, NSMutableArray, NSUUID, NSString, NSObject, CXChannelProvider;
@protocol OS_dispatch_queue, PTChannelManagerDelegate, PTChannelRestorationDelegate;

@interface PTChannelManager : NSObject <CXChannelProviderDelegate>

@property (readonly, nonatomic) CXChannelProvider *underlyingProvider;
@property (readonly, nonatomic) CXCallController *callController;
@property (weak, nonatomic) id<PTChannelRestorationDelegate> channelRestorationDelegate;
@property (weak, nonatomic) id<PTChannelManagerDelegate> channelEventDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ instantiationCompletionBlock;
@property (retain, nonatomic) NSMutableArray *pendingPushes;
@property (nonatomic) BOOL attemptingChannelRestoration;
@property (retain, nonatomic) NSUUID *suppressRejoinForRecentlyDisconnectedChannelUUID;
@property BOOL isWaitingForPushResult;
@property (retain) NSUUID *waitingForPushResultChannelUUID;
@property BOOL stopTransmitRequestedWhileWaitingForPushResult;
@property (readonly, nonatomic) NSUUID *activeChannelUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)channelManagerWithDelegate:(id)a0 restorationDelegate:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)provider:(id)a0 didActivateAudioSession:(id)a1;
- (void)provider:(id)a0 didDeactivateAudioSession:(id)a1;
- (void)provider:(id)a0 didReceiveChannelPushToken:(id)a1;
- (void)provider:(id)a0 didReceiveCheckInResult:(long long)a1 channelUUID:(id)a2;
- (void)provider:(id)a0 didReceivePushPayload:(id)a1 channelUUID:(id)a2 reply:(id /* block */)a3;
- (void)provider:(id)a0 performChannelJoinAction:(id)a1;
- (void)provider:(id)a0 performChannelLeaveAction:(id)a1;
- (void)provider:(id)a0 performChannelTransmitStartAction:(id)a1;
- (void)provider:(id)a0 performChannelTransmitStopAction:(id)a1;
- (void)providerDidBegin:(id)a0;
- (void)providerDidReset:(id)a0;
- (void)unregisterChannelPushToken;
- (void)_appendPendingPushForUUID:(id)a0 payload:(id)a1 reply:(id /* block */)a2;
- (void)_deliverChannelManagerInstanceToClientIfNeeded;
- (void)_deliverPendingPushes;
- (void)_ensureDelegateIsReadyToReceiveActions:(id)a0 joinReason:(long long)a1;
- (void)_handleLeaveCheckinResult:(id)a0;
- (void)_handlePushResult:(id)a0 pendingPush:(id)a1;
- (id)_initWithEventDelegate:(id)a0 restorationDelegate:(id)a1 instantiationCompletion:(id /* block */)a2;
- (void)_performChannelRestorationAndUpdateChannelDescriptor:(id)a0 pushPayload:(id)a1;
- (void)_requestJoinChannelWithUUID:(id)a0 channelDescriptor:(id)a1 originator:(long long)a2 completion:(id /* block */)a3;
- (void)_setActiveRemoteParticipant:(id)a0 forChannelUUID:(id)a1 shouldReplaceOutgoingTransmission:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)leaveChannelWithUUID:(id)a0;
- (void)requestBeginTransmittingWithChannelUUID:(id)a0;
- (void)requestJoinChannelWithUUID:(id)a0 descriptor:(id)a1;
- (void)setActiveRemoteParticipant:(id)a0 forChannelUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setChannelDescriptor:(id)a0 forChannelUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setServiceStatus:(long long)a0 forChannelUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTransmissionMode:(long long)a0 forChannelUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopTransmittingWithChannelUUID:(id)a0;

@end
