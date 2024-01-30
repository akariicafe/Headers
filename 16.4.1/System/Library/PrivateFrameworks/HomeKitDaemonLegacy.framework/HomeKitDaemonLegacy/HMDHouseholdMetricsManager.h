@class HMDMetricsDateProvider, HMDHouseholdMetricsMessagingProvider, HMDHouseholdMetricsServer, NSString, NSUUID, HMDHouseholdMetricsClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHouseholdMetricsManager : HMFObject <HMDLogEventHomeutilTaskRunner, HMFMessageReceiver, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, nonatomic) HMDHouseholdMetricsClient *client;
@property (readonly, nonatomic) HMDHouseholdMetricsServer *server;
@property (readonly, nonatomic) HMDHouseholdMetricsMessagingProvider *messagingProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
