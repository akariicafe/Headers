@class NSString, HMBCloudZone;

@interface HMBShareOperation : HMBFutureOperation <HMFLogging>

@property (readonly) HMBCloudZone *cloudZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (id)initWithCloudZone:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
