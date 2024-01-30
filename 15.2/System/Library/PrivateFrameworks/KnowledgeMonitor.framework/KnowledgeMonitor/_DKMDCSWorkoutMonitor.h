@class _CDContextualChangeRegistration, BMWorkoutStream, _CDClientContext;

@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}

@property (retain, nonatomic) BMWorkoutStream *workoutStream;

+ (id)eventStream;
+ (id)entitlements;

- (void)start;
- (id)createWorkoutPredicate;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
