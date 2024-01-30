@class NSString, _CDContextualChangeRegistration, _CDClientContext;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeExerciseFeaturizer : NSObject <ATXModeFeaturizer> {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}

@property BOOL isInWorkout;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginListening;
- (id)provideFeatures;
- (void)stopListening;
- (id)_createWorkoutPredicate;
- (void)_setUpContextIfNecessary;
- (void).cxx_destruct;

@end
