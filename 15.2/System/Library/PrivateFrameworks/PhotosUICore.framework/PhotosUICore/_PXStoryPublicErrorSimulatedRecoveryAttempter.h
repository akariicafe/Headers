@class NSArray;

@interface _PXStoryPublicErrorSimulatedRecoveryAttempter : _PXStoryPublicErrorRecoveryAttempter

@property (readonly, nonatomic) NSArray *recoveryOptions;

- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;

@end
