@class NSArray;
@protocol PXAudioCueSource;

@interface PXStoryMockPacingCueSource : NSObject <PXStoryPacingCueSource>

@property (readonly, copy, nonatomic) NSArray *cueTimes;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (nonatomic) long long cuesVersion;
@property (readonly, nonatomic) id<PXAudioCueSource> audioCueSource;

- (void).cxx_destruct;
- (id)init;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticCueStringForSize:(struct CGSize { double x0; double x1; })a0 withIndicatorTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 rangeIndicatorTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)initWithCueTimes:(id)a0;

@end
