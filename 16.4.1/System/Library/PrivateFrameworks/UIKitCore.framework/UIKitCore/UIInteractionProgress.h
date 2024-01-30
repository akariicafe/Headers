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

- (void)endInteraction:(BOOL)a0;
- (void)setPercentComplete:(double)a0;
- (void)addProgressObserver:(id)a0;
- (void)removeProgressObserver:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_indexOfObserver:(id)a0;
- (void)endInteraction:(BOOL)a0 finalVelocity:(double)a1;
- (long long)numberOfObservers;

@end
