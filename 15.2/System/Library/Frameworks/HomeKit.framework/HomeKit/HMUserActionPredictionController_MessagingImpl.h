@class NSUUID, NSArray, NSNotificationCenter, NSString, NSObject;
@protocol HMUserActionPredictionControllerDataSource, OS_dispatch_queue;

@interface HMUserActionPredictionController_MessagingImpl : HMUserActionPredictionController <HMFLogging, HMFMessageReceiver> {
    NSArray *_predictions;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSUUID *homeUUID;
@property (weak) id<HMUserActionPredictionControllerDataSource> dataSource;
@property (copy) NSArray *lastUpdatedClientMappedPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)predictions;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)setPredictions:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)mergeWithOtherPredictionController:(id)a0 operations:(id)a1;
- (void)handleUpdatePredictionsMessage:(id)a0;
- (void)configureWithDataSource:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithPredictions:(id)a0 homeUUID:(id)a1;
- (void)fetchPredictionsWithCompletion:(id /* block */)a0;

@end
