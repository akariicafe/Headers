@class NSArray, MFError, MFAccount, MFMonitoredInvocation, MFActivityMonitor;

@interface MFAccountValidator : NSObject {
    MFAccount *_account;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;
    id /* block */ _completionBlock;
    struct { unsigned char useSSL : 1; unsigned char incomingServerSupportsSSL : 1; unsigned char smtpServerSupportsSSL : 1; unsigned char canceled : 1; unsigned char performsValidationInBackground : 1; unsigned int unused : 27; } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
}

@property (readonly, nonatomic) BOOL performsValidationInBackground;
@property (readonly, nonatomic) MFMonitoredInvocation *validationInvocation;
@property (nonatomic) id delegate;
@property (readonly, nonatomic) BOOL accountIsValid;
@property (readonly, nonatomic) BOOL accountSupportsSSL;
@property (readonly, nonatomic) MFError *error;
@property (readonly, nonatomic) MFAccount *account;

- (id)init;
- (id)initWithPerformsValidationInBackground:(BOOL)a0;
- (void)validateAccount:(id)a0 useSSL:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_validateAccount:(id)a0 withFallbacks:(BOOL)a1;
- (void)validateAccountWithoutFallbacks:(id)a0 withCompletion:(id /* block */)a1;
- (void)_backgroundValidateAccountFinished:(id)a0 authSchemes:(id)a1;
- (void)_validateAccount:(id)a0;
- (void)_validateAccountWithoutFallbacks:(id)a0;
- (BOOL)_outgoingServerValid;
- (BOOL)_incomingServerValid;
- (void)validateAccount:(id)a0 useSSL:(BOOL)a1;
- (void)validateAccountWithoutFallbacks:(id)a0;
- (void)cancelValidation;
- (id)_ispAccountInfo;
- (BOOL)accountValidationCanceled;
- (void)dealloc;
- (void)stop;

@end
