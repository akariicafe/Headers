@class NSNumber, NSHashTable, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface ACHAchievementProgressEngine : NSObject

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) NSNumber *overrideDelay;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)requestProgressUpdateForProgressProvider:(id)a0;
- (BOOL)shouldPopulateProgressForAchievement:(id)a0;
- (BOOL)populateProgressAndGoalForAchievement:(id)a0;
- (void)_notifyObserversOfProgressUpdate;
- (id)_queue_providerForTemplate:(id)a0;
- (void)registerProgressProvider:(id)a0;
- (void)deregisterProgressProvider:(id)a0;
- (unsigned long long)providerCount;

@end
