@interface BLSHPendingTwoPhaseUpdateDisplayMode : BLSHPendingUpdateDisplayMode

@property (weak) BLSHPendingTwoPhaseUpdateDisplayMode *previous;
@property (retain) BLSHPendingTwoPhaseUpdateDisplayMode *next;

- (BOOL)isFullyCompleted;
- (id)last;
- (BOOL)isTwoPhaseUpdate;
- (id)updateOperation;
- (id)first;
- (BOOL)isStarted;
- (id)rampOperation;
- (id)description;
- (void).cxx_destruct;

@end
