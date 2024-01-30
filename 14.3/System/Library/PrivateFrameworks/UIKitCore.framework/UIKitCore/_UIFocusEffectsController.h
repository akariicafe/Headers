@class _UIDynamicValueConvergenceAnimation, NSHashTable;

@interface _UIFocusEffectsController : NSObject {
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    NSHashTable *_observers;
    struct CGPoint { double x; double y; } _displayOffset;
    double _displayMovementAdjustment;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentOffset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } displayOffset;
@property (nonatomic) BOOL displayOffsetAccumulatorEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)reset;
- (void)cancelRollbackAnimation;
- (void)updateCurrentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)updateCurrentOffset:(struct CGPoint { double x0; double x1; })a0 overrideDisplayOffset:(id)a1;
- (void)startRollbackAnimation;
- (void)resetDisplayOffsetAccumulationFactor;
- (void)addObserver:(id)a0;
- (void)_notifyObserversForMovementDirection:(struct CGVector { double x0; double x1; })a0;

@end
