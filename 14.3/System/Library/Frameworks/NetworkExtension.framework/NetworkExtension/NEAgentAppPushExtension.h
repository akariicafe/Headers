@class NSString, NSArray, NSXPCInterface;

@interface NEAgentAppPushExtension : NEAgentExtension <NEExtensionAppPushProviderHostDelegate, NEAgentSessionDelegate, NEAppPushPluginDriver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;

- (void)setProviderConfiguration:(id)a0;
- (void)handleProviderError:(id)a0;
- (void)handleProviderError:(id)a0 forMessageID:(id)a1;
- (void)reportIncomingCall:(id)a0;
- (void)sendExtensionFailed;
- (void)handleProviderStopped;
- (void)startConnectionWithProviderConfig:(id)a0;
- (void)stopWithReason:(int)a0;
- (void)sendOutgoingCallMessage:(id)a0 andMessageID:(id)a1;
- (void)sendTimerEvent;
- (void)didReceiveIncomingCallWithUserInfo:(id)a0;

@end
