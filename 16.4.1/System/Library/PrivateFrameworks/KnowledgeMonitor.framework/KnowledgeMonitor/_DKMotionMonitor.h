@class CMMotionActivityManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_source;

@interface _DKMotionMonitor : _DKMonitor

@property (nonatomic) BOOL monitoringActivity;
@property (nonatomic) BOOL shouldRecordMotion;
@property (nonatomic) long long lastReportedMotionState;
@property (retain, nonatomic) CMMotionActivityManager *activityManager;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *motionStateProcessingTimer;
@property (readonly, nonatomic) unsigned long long currentDominantMotionState;
@property (readonly, nonatomic) double dominantActivityInterval;
@property (readonly, nonatomic) BOOL activateTimer;

+ (id)eventStream;
+ (unsigned long long)_activityTypeToMotionState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)log;
+ (id)_eventWithState:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)addState:(id)a0;
- (id)classesForSecureStateDecoding;
- (void)computeDominantMotionState;
- (id)initForUnitTest:(BOOL)a0;
- (void)update;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void)addMotionActivity:(id)a0;
- (void).cxx_destruct;

@end
