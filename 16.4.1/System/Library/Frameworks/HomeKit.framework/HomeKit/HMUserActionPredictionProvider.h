@class NSUUID, NSString, HMUserActionPredictionDuetDataSource, NSMutableDictionary, HMFMessageDispatcher, NSObject, HMUserActionPredictionTransformer, NSMapTable;
@protocol OS_dispatch_queue, HMDarwinNotificationProvider, HMUserActionPredictionProviderDataSource;

@interface HMUserActionPredictionProvider : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _firstUnlockToken;
    NSMapTable *_subscribers;
    BOOL _shouldRefetchFromDuet;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, weak) id<HMUserActionPredictionProviderDataSource> dataSource;
@property (readonly) HMUserActionPredictionDuetDataSource *duetDataSource;
@property (readonly) HMUserActionPredictionTransformer *predictionTransformer;
@property (readonly) NSMutableDictionary *lastMappedPredictionsPerHome;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (void)_handleRefreshPredictionsMessage:(id)a0;
- (void)addSubscriber:(id)a0 forHomeIdentifier:(id)a1;
- (void)fetchPredictionsForHomeWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 UUID:(id)a2 dataSource:(id)a3 duetDataSource:(id)a4 predictionTransformer:(id)a5 darwinNotificationProvider:(id)a6;
- (void)recalculatePredictions;
- (void)removeSubscriber:(id)a0 forHomeIdentifier:(id)a1;
- (void)unconfigure;

@end
