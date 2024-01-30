@class BMStreamsAccessService, BMComputeXPCPublisherServer, NSString, BMDSLGraphValidator, BMComputeSourceServer, NSObject, BMBookmarkStorage;
@protocol OS_dispatch_queue;

@interface BMDaemon : NSObject <BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer;
@property (readonly, nonatomic) BMStreamsAccessService *legacyAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *userAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *systemAccessService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAgent;
+ (void)registerXPCActivities;
+ (id)computePublisherServiceName;
+ (id)computeSourceServiceName;
+ (void)_handlePrivacyResetNotification;
+ (id)computePublisherStreamName;
+ (id)new;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2;
+ (void)donateLaunchEvents;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0;
+ (void)pruneRestrictedStreams;
+ (id)loadDKStreamNameToTTL;

- (id)fetchBookmarkWithSubscription:(id)a0 upToTimestamp:(id)a1 success:(BOOL *)a2;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)setUpNotificationHandler;
- (id)initWithQueue:(id)a0;

@end
