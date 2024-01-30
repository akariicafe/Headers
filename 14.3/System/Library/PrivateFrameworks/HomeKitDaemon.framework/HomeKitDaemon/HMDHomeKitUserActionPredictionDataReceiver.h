@class HMFTimer, NSUUID, NSMapTable, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue, HMDUserActionPredictionDataSource;

@interface HMDHomeKitUserActionPredictionDataReceiver : HMFObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDUserActionPredictionDataReceiver> {
    HMFTimer *_notifyDebounceTimer;
    unsigned long long _debouncedNotifyPredictionLimit;
}

@property (readonly) NSMapTable *subscribedClientConnections;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) id<HMDUserActionPredictionDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2;
- (void)configureWithDataSource:(id)a0;
- (void)updatedUserActionPrediction:(id)a0 atSortedIndex:(unsigned long long)a1;
- (void)removedUserActionPrediction:(id)a0 atSortedIndex:(unsigned long long)a1;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2 timerFactory:(id /* block */)a3;
- (void)_notifySubscribersOfUpdateBelowLimit:(unsigned long long)a0;
- (void)_handleSubscribeMessage:(id)a0;
- (void)_handleUnsubscribeMessage:(id)a0;
- (void)_handleUpdatePredictionMessage:(id)a0;
- (void)_handleRemovePredictionMessage:(id)a0;
- (void)_handleRemoveAllPredictionsMessage:(id)a0;
- (void)_debounceNotifySubscribersOfUpdateBelowLimit:(unsigned long long)a0;
- (void)_notifySubscriber:(id)a0 clientConnection:(id)a1 messageName:(id)a2 payload:(id)a3;
- (id)decodeUserActionPredictionsFromMessage:(id)a0 error:(id *)a1;
- (void)_addOrUpdateSubcriber:(id)a0 clientConnection:(id)a1;
- (void)_removeSubcriberWithUUID:(id)a0 clientConnection:(id)a1;

@end
