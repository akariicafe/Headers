@class NSUUID, NSArray, _HMContext, HMFUnfairLock, NSObject, NSString;
@protocol HMUserActionPredictionControllerDataSource, HMUserActionPredictionControllerDelegate, OS_dispatch_queue;

@interface HMUserActionPredictionController : NSObject <HMFMessageReceiver>

@property (readonly, copy) NSUUID *homeUUID;
@property (weak) id<HMUserActionPredictionControllerDataSource> dataSource;
@property (copy) NSArray *lastUpdatedClientMappedPredictions;
@property (readonly) _HMContext *context;
@property (readonly) HMFUnfairLock *lock;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSArray *predictions;
@property (weak) id<HMUserActionPredictionControllerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)handleUpdatePredictionsMessage:(id)a0;
- (id)initWithPredictions:(id)a0 homeUUID:(id)a1;
- (void)fetchPredictionsWithCompletion:(id /* block */)a0;
- (void)configureWithDataSource:(id)a0 context:(id)a1;
- (BOOL)mergeWithOtherPredictionController:(id)a0 operations:(id)a1;
- (void)setPredictions:(id)a0;

@end
