@class CDPDevice, NSMutableDictionary, CDPContext, NSMutableSet;
@protocol CDPDDeviceSecretValidatorDelegate;

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {
    BOOL _isAttemptingRecovery;
    unsigned long long _failedAttempts;
    NSMutableDictionary *_failedSecrets;
    NSMutableSet *_failedRecoveryKeys;
    NSMutableSet *_failedSingleICSCs;
    NSMutableDictionary *_recoveryErrors;
    BOOL _depletedRemainingAttempts;
    CDPContext *_context;
    CDPDevice *_currentDevice;
}

@property (nonatomic) BOOL isUsingMultipleICSC;
@property (copy, nonatomic) id /* block */ validSecretHandler;
@property (weak, nonatomic) id<CDPDDeviceSecretValidatorDelegate> delegate;
@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (id)init;
- (void).cxx_destruct;
- (void)cancelValidationWithError:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (BOOL)isAttemptingRecovery;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (BOOL)_isFailedSecret:(id)a0 forDevice:(id)a1;
- (void)_handleMultiCSCRecoveryResults:(id)a0 clique:(id)a1 type:(unsigned long long)a2 secret:(id)a3 device:(id)a4 completion:(id /* block */)a5;
- (void)_attemptToRecoverWithRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)a0 recoveryError:(id)a1 secret:(id)a2;
- (void)_handleRecoveryFailureForFinalDevice:(id)a0 completion:(id /* block */)a1;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)_attemptToRecoverDevice:(id)a0 withSecret:(id)a1 completion:(id /* block */)a2;
- (void)_performSingleiCSCRecoveryWithSecret:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_handleDelegateValidationError:(id)a0;
- (BOOL)_isInvalidICSCError:(id)a0;
- (id)_failedSecretsForDevice:(id)a0;
- (id)_failedSingleICSCs;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)failedAttempts;

@end
