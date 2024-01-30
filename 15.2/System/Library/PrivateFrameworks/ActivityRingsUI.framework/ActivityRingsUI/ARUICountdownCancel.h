@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (id)timingFunction;
- (id)identifier;
- (BOOL)cancelable;
- (double)duration;
- (void)cancel;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
