@class NSPointerArray;

@interface UIInteractionProgress : NSObject {
    NSPointerArray *_observers;
    double _previousPercentComplete;
    double _previousUpdateTime;
    double _mostRecentUpdateTime;
    long long _atLeastTwoUpdates;
}

@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double velocity;

- (void)setPercentComplete:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)removeProgressObserver:(id)a0;
- (void)endInteraction:(BOOL)a0;
- (unsigned long long)_indexOfObserver:(id)a0;
- (long long)numberOfObservers;
- (void)endInteraction:(BOOL)a0 finalVelocity:(double)a1;
- (void)addProgressObserver:(id)a0;

@end
