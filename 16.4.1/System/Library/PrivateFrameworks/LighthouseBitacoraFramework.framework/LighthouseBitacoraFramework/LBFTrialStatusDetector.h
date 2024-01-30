@class NSDictionary;

@interface LBFTrialStatusDetector : NSObject

@property (readonly, nonatomic) NSDictionary *observedTrialStatusHolder;

- (id)init;
- (void).cxx_destruct;
- (id)getTrialStatus:(id)a0 deploymentId:(id)a1;

@end
