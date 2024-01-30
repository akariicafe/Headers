@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation> {
    unsigned long long _step;
    BOOL _cancelable;
}

@property (nonatomic) double percent;

+ (id)identifier;

- (id)timingFunction;
- (double)delay;
- (id)description;
- (BOOL)cancelable;
- (double)duration;
- (id)identifier;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)countdownStep;
- (id)initWithPercent:(double)a0 andStep:(unsigned long long)a1 cancelable:(BOOL)a2;

@end
