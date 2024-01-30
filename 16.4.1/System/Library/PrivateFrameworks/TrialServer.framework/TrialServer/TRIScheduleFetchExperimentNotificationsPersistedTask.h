@class TRIPersistedNetworkBehavior;

@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic) BOOL rollbacksOnly;
@property (nonatomic) BOOL hasRollbacksOnly;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) BOOL hasNetworkBehavior;

+ (id)descriptor;

@end
