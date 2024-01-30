@class HMFTimer, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDTimeInformationMonitor : HMFObject <HMFTimerDelegate>

@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void)systemTimeChanged:(id)a0;
- (void)_updateWithTimerInterval;
- (void)_handleExpiration;

@end
