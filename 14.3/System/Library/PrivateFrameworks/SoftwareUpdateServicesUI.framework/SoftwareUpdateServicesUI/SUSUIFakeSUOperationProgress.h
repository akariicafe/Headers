@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (BOOL)isDone;
- (id)phase;
- (float)percentComplete;
- (double)timeRemaining;
- (float)normalizedPercentComplete;

@end
