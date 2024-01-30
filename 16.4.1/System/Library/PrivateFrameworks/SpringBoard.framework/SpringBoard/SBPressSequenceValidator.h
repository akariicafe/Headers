@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject

@property (readonly, nonatomic) SBPressSequenceSettings *settings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)_modeForDesiredIndex:(unsigned long long)a0 isDownEvent:(BOOL)a1;
- (struct _SBPressSequenceValidatorBounds { double x0; double x1; })_pressDownBoundsForDesiredIndex:(unsigned long long)a0 sequence:(id)a1;
- (struct _SBPressSequenceValidatorBounds { double x0; double x1; })_pressUpBoundsForDesiredIndex:(unsigned long long)a0 sequence:(id)a1;
- (BOOL)pressEventIsValidInSequence:(id)a0 endingDownEvent:(BOOL)a1 duration:(double)a2;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)a0 lastPressEventInSequenceIsDown:(BOOL)a1;

@end
