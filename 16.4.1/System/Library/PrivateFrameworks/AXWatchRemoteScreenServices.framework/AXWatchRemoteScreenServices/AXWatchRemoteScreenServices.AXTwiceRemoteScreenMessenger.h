@class _TtC27AXWatchRemoteScreenServices28AXTwiceRemoteScreenMessenger;

@interface AXWatchRemoteScreenServices.AXTwiceRemoteScreenMessenger : NSObject <AXTwiceRemoteScreenMessengerProtocolObjc, AXIDSServicesClient>

@property (class, nonatomic, readonly) _TtC27AXWatchRemoteScreenServices28AXTwiceRemoteScreenMessenger *sharedInstance;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)cleanup;
- (void)didReceiveIncomingData:(id)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (void)sendMessage:(id)a0;
- (void)serverConnectionWasInterrupted;
- (void)receiveMessage:(id)a0;
- (void)reconnectToAXUIServerIfNeeded;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
