@class APSConnection, NSString, NSObject;
@protocol OS_dispatch_queue, MAPushServiceConnectionDelegate;

@interface MAPushServiceConnection : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly, nonatomic) id<MAPushServiceConnectionDelegate> delegate;
@property (readonly, nonatomic) APSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribedChannels;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)_subscribeToChannel:(id)a0;
- (id)_publicChannelForPushChannel:(id)a0;
- (void)unsubscribeFromChannel:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)_APSConnectionEnvironment;
- (void)_unsubscribeFromChannel:(id)a0;
- (void)subscribeToChannel:(id)a0;
- (unsigned long long)_subscribedChannelCount;
- (void).cxx_destruct;

@end
