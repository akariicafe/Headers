@class NSString;

@interface HMIAnalytics : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)sendEventForFaceEvent:(id)a0 homePersonManagerUUID:(id)a1 camera:(id)a2;
+ (void)sendEventForPersonsModels:(id)a0;
+ (long long)bucketForValue:(long long)a0 usingBuckets:(id)a1;
+ (void)sendEventForClusteringTask:(id)a0;


@end
