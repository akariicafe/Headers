@interface ARUICountdownPreCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (id)identifier;
- (BOOL)cancelable;
- (double)duration;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
