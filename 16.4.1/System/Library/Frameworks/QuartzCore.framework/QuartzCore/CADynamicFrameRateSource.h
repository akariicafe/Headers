@interface CADynamicFrameRateSource : NSObject {
    struct DynamicFrameRateSource { unsigned int x0; void *x1; struct CAFrameRateRange { float x0; float x1; float x2; } x2; struct CAFrameIntervalRange { unsigned int x0; unsigned int x1; unsigned int x2; } x3; unsigned long long x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8[4]; unsigned char x9 : 1; struct DynamicFrameRateSource *x10; unsigned char x11 : 1; } *_impl;
}

@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;

- (id)initWithDisplay:(id)a0;
- (void)dealloc;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (double)commitDeadline;
- (double)commitDeadlineAfterTimestamp:(double)a0;
- (BOOL)shiftFramePhaseBy:(double)a0;

@end
