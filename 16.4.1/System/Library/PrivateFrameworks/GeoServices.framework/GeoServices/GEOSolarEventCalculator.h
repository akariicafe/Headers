@interface GEOSolarEventCalculator : NSObject {
    void *_rts;
}

+ (double)nextEventOfType:(unsigned int)a0 after:(double)a1 forLocation:(struct { double x0; double x1; })a2;
+ (double)nextEventOfType:(unsigned int)a0 after:(double)a1 forLocation:(struct { double x0; double x1; })a2 altitudeInDegrees:(double)a3 accuracy:(double)a4;
+ (double)prevEventOfType:(unsigned int)a0 before:(double)a1 forLocation:(struct { double x0; double x1; })a2 altitudeInDegrees:(double)a3 accuracy:(double)a4;

- (id)initWithLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2 accuracy:(double)a3;
- (id)initWithLocation:(struct { double x0; double x1; })a0 time:(double)a1;
- (void)dealloc;
- (double)nextEventOfType:(unsigned int)a0;
- (id)initWithLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2 accuracy:(double)a3 after:(BOOL)a4;
- (id)description;

@end
