@class NSString;

@interface HMIAnalytics : HMFObject <HMFLogging>

@property (class, readonly) BOOL upload;
@property (class, readonly) BOOL lazyPayloads;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)bucketForValue:(long long)a0 usingBuckets:(id)a1;
+ (id)payloadWithCamera:(id)a0;
+ (void)sendEventForClusteringTask:(id)a0;
+ (void)sendEventForFaceEvent:(id)a0 homePersonManagerUUID:(id)a1 camera:(id)a2;
+ (void)sendEventForPersonRecognitionType:(long long)a0 camera:(id)a1;
+ (void)sendEventForPersonsModels:(id)a0;
+ (BOOL)sendEventWithName:(id)a0 payloadBuilder:(id /* block */)a1;
+ (void)sendEventsForFragmentResult:(id)a0;
+ (void)videoAnalyzerDidAnalyzeFragmentWithResult:(id)a0 state:(id)a1;
+ (void)videoAnalyzerDidCreateTimelapseFragment:(id)a0 state:(id)a1;
+ (void)videoAnalyzerDidFindFaceEvent:(id)a0 homePersonManagerUUID:(id)a1 camera:(id)a2;
+ (void)videoAnalyzerDidTerminateWithError:(id)a0 state:(id)a1;
+ (void)videoPackageAnalyzerDidClassifyCandidateAsPackage:(BOOL)a0 camera:(id)a1;
+ (void)videoPackageAnalyzerDidResetReferenceImageWithInterval:(double)a0 camera:(id)a1;


@end
