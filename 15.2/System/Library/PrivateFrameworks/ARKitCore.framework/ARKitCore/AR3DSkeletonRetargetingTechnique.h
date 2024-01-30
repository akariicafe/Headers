@class NSUUID, ARCoreRESkeletonResults, NSObject;
@protocol OS_dispatch_semaphore;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_retargetSkeleton:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
