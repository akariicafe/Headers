@class NSObject, NSString;
@protocol OS_dispatch_queue, HMDThreadRadioClient;

@interface HMDThreadResidentCommissioner : HMFObject <HMFLogging, HMDThreadResidentCommissioner>

@property (class, readonly, nonatomic) HMDThreadResidentCommissioner *sharedCommissioner;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDThreadRadioClient> threadRadioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initInternal;
- (void).cxx_destruct;
- (id)initWithThreadRadioClient:(id)a0;
- (void)_startThreadNetworkWithID:(id)a0 completion:(id /* block */)a1;
- (void)_stopThreadNetworkWithCompletion:(id /* block */)a0;
- (void)stopThreadNetworkWithCompletion:(id /* block */)a0;
- (void)startThreadNetworkWithID:(id)a0 completion:(id /* block */)a1;

@end
