@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HAPPowerManager : NSObject <HMFLogging> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) unsigned int systemPowerMgr;
@property (readonly, nonatomic) struct IONotificationPort { } *systemPowerPort;
@property (readonly, nonatomic) unsigned int systemPowerNotifier;
@property (retain, nonatomic) NSMapTable *delegatesMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void)systemPowerChanged:(unsigned int)a0 notificationID:(void *)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)deRegisterFromSleepWake:(id)a0;
- (void)registerForSleepWake:(id)a0 queue:(id)a1;

@end
