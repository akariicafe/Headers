@class TRIPersistedRolloutFactorsState, TRIPersistedExperimentFactorsState;

@interface TRIPersistedFactorsState : TRIPBMessage

@property (readonly, nonatomic) int stateOneOfCase;
@property (retain, nonatomic) TRIPersistedRolloutFactorsState *rollout;
@property (retain, nonatomic) TRIPersistedExperimentFactorsState *experiment;

+ (id)descriptor;

@end
