@class NSString, NSObject, HMDAccessory;
@protocol OS_dispatch_queue, HMELastEventStoreReadHandle, HMEEventForwarder, HMDSUControllerManager;

@interface HMDSoftwareUpdateEventProviderContext : HMFObject <HMFLogging>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMEEventForwarder> eventForwarder;
@property (retain) id<HMDSUControllerManager> suControllerManager;
@property (copy) id /* block */ suControllerManagerFactory;
@property (readonly, copy) NSString *eventSource;
@property (readonly) double eventTimeStamp;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)forwardEvent:(id)a0 withTopicSuffixID:(unsigned long long)a1;
- (void)configureWithDelegate:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 eventStoreReadHandle:(id)a2 eventForwarder:(id)a3 suControllerManagerFactory:(id /* block */)a4;
- (id)lastEventForTopicSuffixID:(unsigned long long)a0;
- (void)managerStatus:(id /* block */)a0;
- (void)scanWithOptions:(id)a0;

@end
