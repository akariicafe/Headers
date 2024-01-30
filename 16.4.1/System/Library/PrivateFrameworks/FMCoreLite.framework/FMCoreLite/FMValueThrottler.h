@class NSMutableSet;
@protocol FMScheduler, FMCancelable;

@interface FMValueThrottler : NSObject

@property (readonly, nonatomic) NSMutableSet *observerBlocks;
@property (retain, nonatomic) id<FMCancelable> valueUpdateCancelationToken;
@property (readonly, nonatomic) double throttleInterval;
@property (retain, nonatomic) id<FMScheduler> updateScheduler;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasPendingValueChange;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (void)flushValueChanges;
- (id)initWithThrottleInterval:(double)a0;
- (id)initWithThrottleInterval:(double)a0 initialValue:(id)a1;
- (id)observeValueChangesWithBlock:(id /* block */)a0;

@end
