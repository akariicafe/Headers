@class NSString, HDSPSleepSessionManager, HKSPObserverSet, HDSPEnvironment;
@protocol HDSPSleepTracker;

@interface HDSPSleepTrackingManager : NSObject <HDSPSleepSessionManagerDelegate, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *sleepSessionObservers;
@property (readonly, nonatomic) HDSPSleepSessionManager *sleepSessionManager;
@property (readonly, nonatomic) id<HDSPSleepTracker> sleepTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (id)platformSpecificTrackerWithEnvironment:(id)a0;

- (id)initWithEnvironment:(id)a0;
- (id)initWithEnvironment:(id)a0 sleepSessionManager:(id)a1 sleepTracker:(id)a2;
- (void)addObserver:(id)a0;
- (void)sleepSessionManager:(id)a0 didSaveSession:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (id)sleepSessionManager:(id)a0 requestsProcessedSessionForSession:(id)a1;
- (void)environmentWillBecomeReady:(id)a0;
- (void)removeObserver:(id)a0;
- (void)sleepSessionManager:(id)a0 didSaveArchivedSessions:(id)a1;
- (void)sleepSessionManagerDidFinishSession:(id)a0;
- (void).cxx_destruct;

@end
