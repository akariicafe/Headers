@class _UITouchForceObservationMessageReader;

@interface _UITouchForceMessage : NSObject {
    BOOL _isReset;
    _UITouchForceObservationMessageReader *_observeReader;
}

@property (nonatomic) double unclampedTouchForce;
@property (nonatomic) double maximumPossibleForce;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } centroid;
@property (nonatomic) BOOL shouldFilterDueToSystemGestures;

+ (id)observe:(id /* block */)a0;
+ (id)reset;

- (void)ifObservation:(id /* block */)a0 ifReset:(id /* block */)a1;
- (void)ifObservationUnclamped:(id /* block */)a0 ifReset:(id /* block */)a1;
- (void).cxx_destruct;

@end
