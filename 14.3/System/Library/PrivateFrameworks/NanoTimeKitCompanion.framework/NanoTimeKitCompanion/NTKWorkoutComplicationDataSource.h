@class NSArray, HKHealthStore, _HKCurrentWorkoutSnapshot, _HKWorkoutObserver, NSObject, HKSampleQuery, HKWorkout, HKObserverQuery;
@protocol OS_dispatch_queue;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource {
    NSObject<OS_dispatch_queue> *_healthQueue;
    BOOL _deviceIsLocked;
    int _workoutStateNotifyToken;
    NSArray *_animationImages;
    BOOL _inUVPreview;
}

@property (nonatomic, getter=isLoadingLastWorkout) BOOL loadingLastWorkout;
@property (retain, nonatomic) HKWorkout *lastWorkout;
@property (nonatomic) BOOL hasKnownLastWorkoutState;
@property (retain, nonatomic) _HKWorkoutObserver *workoutObserver;
@property (retain, nonatomic) _HKCurrentWorkoutSnapshot *activeWorkoutSnapshot;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSampleQuery *lastWorkoutQuery;
@property (retain, nonatomic) HKObserverQuery *workoutObservationQuery;

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_templateForWorkout:(id)a0 family:(long long)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)_unknownTemplateForFamily:(long long)a0;
+ (id)_workoutTintColor;
+ (id)_signatureTemplateWithFamily:(long long)a0 hasActiveWorkout:(BOOL)a1 hasPausedActiveWorkout:(BOOL)a2;

- (void)resumeAnimations;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_animationImages;
- (void)_startObserving;
- (void)_invalidate;
- (void)resume;
- (BOOL)_hasActiveWorkout;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (void)_handleDeviceLockChange;
- (id)complicationApplicationIdentifier;
- (void)_updateActiveWorkoutState;
- (void)_stopLastWorkoutQuerySynchronously:(BOOL)a0;
- (void)_stopObservingSynchronously:(BOOL)a0;
- (id)_templateForActiveWorkoutInSwitcher:(BOOL)a0;
- (id)_noWorkoutsTemplate;
- (void)_startLastWorkoutQueryIfPossible;
- (BOOL)_hasPausedActiveWorkout;
- (id)_makeAnimatedImageProvider;
- (id)_makeObservationQuery;
- (id)_makeLastWorkoutQuery;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)lockedTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;

@end
