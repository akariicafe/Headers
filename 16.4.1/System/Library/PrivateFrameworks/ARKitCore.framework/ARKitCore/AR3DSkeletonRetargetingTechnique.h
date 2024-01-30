@class ABPKRetargeting, ARCoreRESkeletonResults, NSObject;
@protocol OS_dispatch_semaphore;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    ABPKRetargeting *_abpkRetargeting;
}

@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepare:(BOOL)a0;
- (id)_retargetSkeleton:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
