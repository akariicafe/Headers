@class NSString, NSURL, ISDialogButton, NSDictionary, ISDialog, ISTouchIDDialog, SSBiometricAuthenticationContext, NSObject, ISURLBag;
@protocol OS_dispatch_queue;

@interface ISBiometricAuthorizationDialogOperation : ISOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISURLBag *_urlBag;
}

@property (retain) ISDialog *fallbackDialog;
@property (retain) ISTouchIDDialog *touchIDDialog;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property (copy) NSDictionary *buyParams;
@property (copy) NSDictionary *metricsDictionary;
@property (copy) NSString *userAgent;
@property (readonly) ISDialog *dialog;
@property (readonly) NSURL *redirectURL;
@property (readonly) ISDialogButton *selectedButton;

- (void)run;
- (void).cxx_destruct;
- (void)_loadURLBag;
- (id)initWithTouchIDDialog:(id)a0 fallbackDialog:(id)a1;
- (BOOL)_runSignatureOperationReturningError:(id *)a0;
- (BOOL)_shouldFallbackToAuthKitForError:(id)a0;
- (BOOL)_runAuthkitOperationWithError:(id)a0 returningError:(id *)a1;
- (void)_performMetricsWithBiometricMatch:(unsigned long long)a0 didBiometricsFail:(BOOL)a1;
- (void)_findSelectedButtonForButtons:(id)a0;

@end
