@interface ABPK2DDetectionPostProcessSelector : NSObject

+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)a0 use3DSkeletonForExtrapolation:(BOOL)a1 shouldPush3DSupportSkeleton:(BOOL)a2 withExtrapolationTime:(double)a3;
+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)a0 use3DSkeletonForExtrapolation:(BOOL)a1 shouldPush3DSupportSkeleton:(BOOL)a2;

@end
