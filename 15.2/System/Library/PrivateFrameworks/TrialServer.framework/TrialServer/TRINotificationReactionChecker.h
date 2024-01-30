@class TRIRolloutDatabase, TRIExperimentDatabase;
@protocol TRIDateProviding;

@interface TRINotificationReactionChecker : NSObject <TRINotificationReactionCheckerProtocol> {
    id<TRIDateProviding> _dateProvider;
    TRIRolloutDatabase *_rolloutDb;
    TRIExperimentDatabase *_experimentDb;
}

- (void).cxx_destruct;
- (BOOL)_isOutdatedDeploymentDate:(id)a0;
- (BOOL)_isExistingDeployment:(id)a0;
- (struct { unsigned char x0; })reactionForHotfixDeployment:(id)a0 hotfixDeploymentDate:(id)a1;
- (struct { unsigned char x0; })reactionForRollbackExperimentId:(id)a0;
- (id)initWithDateProvider:(id)a0 rolloutDatabase:(id)a1 experimentDatabase:(id)a2;

@end
