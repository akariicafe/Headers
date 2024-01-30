@interface ARUICountdownFadeIn : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (BOOL)cancelable;
- (double)duration;
- (id)identifier;
- (id)timingFunction;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
