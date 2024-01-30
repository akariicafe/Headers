@class _CDContextualChangeRegistration, BMWorkoutStream, _CDClientContext;

@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}

@property (retain, nonatomic) BMWorkoutStream *workoutStream;

+ (id)eventStream;
+ (id)entitlements;

- (id)createWorkoutPredicate;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
