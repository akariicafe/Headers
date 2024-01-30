@class NSUUID, ARCoreRESkeletonResults, NSObject;
@protocol OS_dispatch_semaphore;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    NSUUID *_skeletonIdentifier;
}

@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults;
@property (nonatomic) struct ARRigEvaluationData { struct RERigAssetBuilder *rigAssetBuilder; struct RERigEvaluation *rigEvaluation; } evaluationRigData;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_retargetSkeleton:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
