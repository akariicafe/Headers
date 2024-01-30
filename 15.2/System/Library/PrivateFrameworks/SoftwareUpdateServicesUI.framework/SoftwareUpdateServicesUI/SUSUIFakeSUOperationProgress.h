@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (id)phase;
- (float)percentComplete;
- (double)timeRemaining;
- (BOOL)isDone;
- (float)normalizedPercentComplete;

@end
