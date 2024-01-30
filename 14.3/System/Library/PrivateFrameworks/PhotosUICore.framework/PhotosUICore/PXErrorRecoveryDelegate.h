@interface PXErrorRecoveryDelegate : NSObject

+ (id)sharedErrorRecoveryDelegate;

- (void)_didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;

@end
