@interface BCSFeatureFlagArbiter : NSObject <BCSFeatureFlagArbitrating>

@property (readonly, nonatomic, getter=isDimSumEnabled) BOOL dimSumEnabled;

@end
