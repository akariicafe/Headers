@class NSString, NSMutableDictionary, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryReachabilityChangedLogEventManager : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner> {
    NSMutableDictionary *_transportReachabilityChangeDatesByUUID;
    BOOL _enabled;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_reset;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_enable;
- (id)initWithHome:(id)a0;
- (void)_submit;
- (void)_disable;
- (void)_submitDailyUpdateForAccessory:(id)a0 withTransportReport:(id)a1;
- (void)_submitForAccessory:(id)a0;
- (void)_submitForAccessory:(id)a0 withTransportReport:(id)a1 reachable:(BOOL)a2 changed:(BOOL)a3;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (id)logEventDispatcher;
- (void)runDailyTask;
- (void)submitForAccessory:(id)a0 withTransportReport:(id)a1 reachable:(BOOL)a2;

@end
