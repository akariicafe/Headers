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

- (id)init;
- (void).cxx_destruct;
- (void)removeProgressObserver:(id)a0;
- (id)description;
- (unsigned long long)_indexOfObserver:(id)a0;
- (void)endInteraction:(BOOL)a0 finalVelocity:(double)a1;
- (long long)numberOfObservers;
- (void)setPercentComplete:(double)a0;
- (void)addProgressObserver:(id)a0;
- (void)endInteraction:(BOOL)a0;

@end
