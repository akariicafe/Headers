@class NSMutableSet;
@protocol NACancelable, NAScheduler;

@interface NAValueThrottler : NSObject

@property (readonly, nonatomic) NSMutableSet *observerBlocks;
@property (retain, nonatomic) id<NACancelable> valueUpdateCancelationToken;
@property (readonly, nonatomic) double throttleInterval;
@property (retain, nonatomic) id<NAScheduler> updateScheduler;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasPendingValueChange;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setValue:(id)a0;
- (id)initWithThrottleInterval:(double)a0 initialValue:(id)a1;
- (id)initWithThrottleInterval:(double)a0;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:(id /* block */)a0;
- (void)flushValueChanges;
- (void)setValue:(id)a0 notifyObservers:(BOOL)a1;

@end
