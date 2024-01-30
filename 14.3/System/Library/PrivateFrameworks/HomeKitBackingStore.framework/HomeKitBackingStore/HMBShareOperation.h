@class NAFuture, NSString, HMBCloudZone;

@interface HMBShareOperation : HMFOperation <HMFLogging>

@property (readonly) HMBCloudZone *cloudZone;
@property (readonly, copy) id /* block */ block;
@property (readonly) NAFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
