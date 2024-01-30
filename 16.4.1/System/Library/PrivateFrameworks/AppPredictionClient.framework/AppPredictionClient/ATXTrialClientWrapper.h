@class NSString, TRIClient, TRIRolloutIdentifiers;
@protocol TRINotificationToken;

@interface ATXTrialClientWrapper : NSObject {
    id<TRINotificationToken> _token;
}

@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, nonatomic) NSString *trialNamespaceName;
@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) int trialDeploymentId;
@property (readonly, nonatomic) TRIRolloutIdentifiers *trialRolloutIdentifiers;

- (void).cxx_destruct;
- (id)dictionaryForTrialResource:(id)a0;
- (id)filePathForTrialResource:(id)a0;
- (id)initWithClientIdentifier:(int)a0 namespaceName:(id)a1;
- (BOOL)refreshEnrollmentInformation;
- (BOOL)refreshRolloutIdentifiers;
- (void)updateFactors;

@end
