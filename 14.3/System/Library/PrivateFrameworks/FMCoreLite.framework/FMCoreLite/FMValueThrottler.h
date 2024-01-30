@class NSMutableSet;
@protocol FMScheduler, FMCancelable;

@interface FMValueThrottler : NSObject

@property (readonly, nonatomic) NSMutableSet *observerBlocks;
@property (retain, nonatomic) id<FMCancelable> valueUpdateCancelationToken;
@property (readonly, nonatomic) double throttleInterval;
@property (retain, nonatomic) id<FMScheduler> updateScheduler;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasPendingValueChange;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithThrottleInterval:(double)a0 initialValue:(id)a1;
- (id)initWithThrottleInterval:(double)a0;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:(id /* block */)a0;
- (void)flushValueChanges;

@end
