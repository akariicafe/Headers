@class NSString;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submit:(id /* block */)a0;
- (struct { double x0[4]; })_chooseNeutralGrayForNonSushi:(struct { struct { double x0[4]; } x0; struct { double x0[4]; } x1; double x2; })a0;
- (struct { double x0; double x1; })_chooseTempTintForSushi:(struct { struct { double x0[4]; } x0; struct { double x0[4]; } x1; double x2; })a0 RAWProperties:(id)a1 brightness:(double)a2;
- (struct { double x0[4]; })_correctedRGBResultFromResult:(struct { double x0[4]; })a0;
- (BOOL)_useTempTint:(struct { double x0[4]; })a0;

@end
