@class TRIClient;
@protocol TPSTrialUpdateHandler;

@interface TPSTrial : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (weak, nonatomic) id<TPSTrialUpdateHandler> updateHandler;

- (id)trialExperimentID;
- (id)initWithUpdateHandler:(id)a0;
- (id)levelForFactor:(id)a0;
- (id)trialRampID;
- (id)trialTreatmentID;
- (id)trialDeploymentID;
- (void).cxx_destruct;

@end
