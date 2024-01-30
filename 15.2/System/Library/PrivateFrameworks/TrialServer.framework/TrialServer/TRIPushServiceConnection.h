@class APSConnection, NSString, NSObject;
@protocol OS_dispatch_queue, TRIPushServiceConnectionDelegate;

@interface TRIPushServiceConnection : NSObject <APSConnectionDelegate, TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly, nonatomic) id<TRIPushServiceConnectionDelegate> triDelegate;
@property (readonly, nonatomic) APSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)subscribeToChannel:(id)a0;
- (id)_publicChannelForChannelId:(id)a0;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (id)subscribedChannels;
- (void).cxx_destruct;
- (void)_subscribeToChannel:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)_unsubscribeFromChannel:(id)a0;
- (void)unsubscribeFromChannel:(id)a0;
- (unsigned long long)_subscribedChannelCount;

@end
