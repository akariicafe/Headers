@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation> {
    unsigned long long _step;
    BOOL _cancelable;
}

@property (nonatomic) double percent;

+ (id)identifier;

- (double)delay;
- (id)timingFunction;
- (id)identifier;
- (BOOL)cancelable;
- (id)description;
- (double)duration;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)countdownStep;
- (id)initWithPercent:(double)a0 andStep:(unsigned long long)a1 cancelable:(BOOL)a2;

@end
