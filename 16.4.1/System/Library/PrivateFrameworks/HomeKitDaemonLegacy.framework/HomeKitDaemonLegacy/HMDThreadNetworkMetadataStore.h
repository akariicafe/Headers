@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>

@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *defaultStore;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueueNetworkChanged;
@property (nonatomic) unsigned long long networkChangedHandlingLastUpdatedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)logCategory;

- (id)initInternal;
- (id)init;
- (void).cxx_destruct;
- (void)retrieveMetadataWithCompletion:(id /* block */)a0;
- (void)_removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)_retrieveMetadataWithCompletion:(id /* block */)a0;
- (void)_scheduleTriggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;
- (void)_triggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;
- (void)removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)triggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;

@end
