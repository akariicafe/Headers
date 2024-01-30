@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (float)percentComplete;
- (double)timeRemaining;
- (BOOL)isDone;
- (id)phase;
- (float)normalizedPercentComplete;

@end
