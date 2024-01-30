@class ISOperation, NSString, NSURL, SSURLBagContext, SSBiometricAuthenticationContext, NSURLResponse, SSAuthenticationContext, NSNumber;
@protocol ISBiometricSessionDelegate;

@interface ISDataProvider : NSObject <NSCopying>

@property long long errorHandlerResponseType;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) SSURLBagContext *bagContext;
@property (weak) ISOperation *parentOperation;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property id<ISBiometricSessionDelegate> biometricSessionDelegate;
@property (retain) NSURLResponse *response;
@property long long contentLength;
@property (retain) NSString *contentType;
@property unsigned long long authenticatedAccountCredentialSource;
@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) id output;
@property (retain) NSURL *redirectURL;

+ (id)provider;

- (void)setup;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)closeStream;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void)configureFromProvider:(id)a0;
- (void)migrateOutputFromSubProvider:(id)a0;
- (BOOL)runTouchIDAuthorizationDialog:(id)a0 fallbackDialog:(id)a1 metricsDictionary:(id)a2 error:(id *)a3;
- (BOOL)runAuthorizationDialog:(id)a0 error:(id *)a1;
- (BOOL)isStream;
- (void)streamCancelled;
- (long long)streamedBytes;
- (BOOL)isStreamComplete;
- (void)resetStream;
- (void)streamDidFailWithError:(id)a0;
- (BOOL)canStreamContentLength:(long long)a0 error:(id *)a1;
- (BOOL)_runServerAuthenticationOperation:(id)a0 error:(id *)a1;
- (BOOL)runSubOperation:(id)a0 error:(id *)a1;
- (void)_performActionsForButton:(id)a0 withDialog:(id)a1;
- (BOOL)runTouchIDAuthorizationDialog:(id)a0 fallbackDialog:(id)a1 error:(id *)a2;

@end
