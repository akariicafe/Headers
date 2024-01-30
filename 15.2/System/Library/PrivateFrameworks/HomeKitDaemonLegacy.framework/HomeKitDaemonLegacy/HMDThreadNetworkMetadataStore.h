@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>

@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *defaultStore;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)new;

- (id)initInternal;
- (void).cxx_destruct;
- (id)init;
- (void)retrievePreferredThreadNetworkIDWithCompletion:(id /* block */)a0;
- (void)retrieveMetadataForNetworkID:(id)a0 completion:(id /* block */)a1;
- (void)_retrieveMetadataForNetworkID:(id)a0 completion:(id /* block */)a1;
- (void)_retrievePreferredThreadNetworkIDWithCompletion:(id /* block */)a0;

@end
