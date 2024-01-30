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

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)startRollbackAnimation;
- (void)updateCurrentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelRollbackAnimation;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)updateCurrentOffset:(struct CGPoint { double x0; double x1; })a0 overrideDisplayOffset:(id)a1;
- (void)resetDisplayOffsetAccumulationFactor;
- (void)_notifyObserversForMovementDirection:(struct CGVector { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
