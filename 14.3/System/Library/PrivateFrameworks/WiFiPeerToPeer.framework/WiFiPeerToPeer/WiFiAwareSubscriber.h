@class WiFiAwareSubscribeConfiguration, NSString, NSXPCConnection, NSObject, NSNumber;
@protocol WiFiAwareSubscriberDelegate, OS_dispatch_queue, WiFiAwareSubscriberXPC;

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_subscribeID;
    id<WiFiAwareSubscriberXPC> _subscriberProxy;
}

@property (weak, nonatomic) id<WiFiAwareSubscriberDelegate> delegate;
@property (readonly, nonatomic) WiFiAwareSubscribeConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resetState;
- (void)stop;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isConnected;
- (void)start;
- (void)handleError;
- (void)subscribeStartedWithInstanceID:(unsigned char)a0;
- (void)subscribeTerminatedWithReason:(long long)a0;
- (void)subscribeReceivedDiscoveryResult:(id)a0;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)a0 address:(id)a1;
- (void)subscribeFailedToStartWithError:(long long)a0;
- (void)subscribeReceivedMessage:(id)a0 fromPublishID:(unsigned char)a1 address:(id)a2;
- (void)sendMessage:(id)a0 toPeerAddress:(id)a1 withInstanceID:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)startSubscribeSync;

@end
