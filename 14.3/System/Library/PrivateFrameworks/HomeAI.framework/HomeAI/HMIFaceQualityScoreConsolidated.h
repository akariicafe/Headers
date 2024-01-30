@class NSDictionary, NSString;

@interface HMIFaceQualityScoreConsolidated : HMFObject <HMFLogging>

@property (readonly) NSDictionary *weights;
@property (readonly) NSDictionary *cutOffThresholds;
@property (readonly) NSDictionary *maximumDifferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (double)computeScoreWithYaw:(double)a0 laplacian:(double)a1 detectorConfidence:(double)a2 boxSize:(double)a3;

@end
