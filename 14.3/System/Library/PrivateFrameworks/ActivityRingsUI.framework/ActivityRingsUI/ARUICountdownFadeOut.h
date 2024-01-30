@interface ARUICountdownFadeOut : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (id)timingFunction;
- (double)delay;
- (BOOL)cancelable;
- (double)duration;
- (id)identifier;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
