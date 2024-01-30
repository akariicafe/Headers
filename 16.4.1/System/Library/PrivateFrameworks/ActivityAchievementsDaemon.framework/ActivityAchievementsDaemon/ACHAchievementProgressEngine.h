@class NSNumber, NSHashTable, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface ACHAchievementProgressEngine : NSObject

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) NSNumber *overrideDelay;

- (void)addObserver:(id)a0;
- (BOOL)populateProgressAndGoalForAchievement:(id)a0;
- (void)_notifyObserversOfProgressUpdate;
- (void)requestProgressUpdateForProgressProvider:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)registerProgressProvider:(id)a0;
- (id)_queue_providerForTemplate:(id)a0;
- (BOOL)shouldPopulateProgressForAchievement:(id)a0;
- (void)deregisterProgressProvider:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)providerCount;

@end
