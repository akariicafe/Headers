@interface BLSHPendingDirectRampDisplayMode : BLSHPendingTwoPhaseUpdateDisplayMode

@property (readonly) long long rampBeginDisplayMode;
@property (getter=isReadyToStart) BOOL readyToStart;
@property double duration;

- (id)updateOperation;
- (BOOL)isDirectRamp;
- (id)rampOperation;
- (id)description;
- (id)initWithRampBeginDisplayMode:(long long)a0 targetDisplayMode:(long long)a1;

@end
