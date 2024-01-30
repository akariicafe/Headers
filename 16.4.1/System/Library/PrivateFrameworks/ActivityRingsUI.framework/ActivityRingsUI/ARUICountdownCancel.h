@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (BOOL)cancelable;
- (double)duration;
- (id)identifier;
- (void)cancel;
- (id)timingFunction;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
