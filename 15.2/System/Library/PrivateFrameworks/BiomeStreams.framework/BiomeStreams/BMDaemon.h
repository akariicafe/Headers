@class BMComputeXPCPublisherServer, NSString, BMComputeSourceServer, BMComputeXPCSubscriptionBookmarkStorage, NSObject;
@protocol OS_dispatch_queue;

@interface BMDaemon : NSObject <BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) BMComputeXPCSubscriptionBookmarkStorage *bookmarkStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeSourceServiceName;
+ (void)_handlePrivacyResetNotification;
+ (void)pruneRestrictedStreams;
+ (void)registerXPCActivities;
+ (id)computePublisherStreamName;
+ (id)computePublisherServiceName;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2;

- (id)initWithQueue:(id)a0;
- (void)setUpNotificationHandler;
- (void).cxx_destruct;
- (id)init;
- (id)fetchBookmarkWithSubscription:(id)a0 upToTimestamp:(id)a1 success:(BOOL *)a2;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;

@end
