@class SSConsolidatedDialog, NSString, SSPaymentSheet, NSData, NSURL, NSNumber, NSLock;

@interface SSBiometricAuthenticationContext : NSObject <SSXPCCoding, NSCopying> {
    NSLock *_lock;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *accountName;
@property long long biometricAuthorizationAttempts;
@property (copy) NSString *challenge;
@property BOOL touchIDDelayEnabled;
@property (retain) SSConsolidatedDialog *consolidatedDialog;
@property (copy) NSString *dialogId;
@property BOOL didAuthenticate;
@property BOOL didBuyParamsChange;
@property BOOL didFallbackToPassword;
@property (copy) NSString *fpanID;
@property BOOL isExtendedAction;
@property BOOL isIdentityMapInvalid;
@property BOOL isPayment;
@property (copy) NSString *passwordEquivalentToken;
@property (retain) SSPaymentSheet *paymentSheet;
@property (copy) NSData *paymentTokenData;
@property (copy) NSURL *redirectURL;
@property BOOL shouldContinueTouchIDSession;
@property BOOL shouldSendFallbackHeader;
@property (copy) NSString *signature;
@property (copy) NSString *userAgent;
@property (copy) NSString *xAppleAMDHeader;
@property (copy) NSString *xAppleAMDMHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;

@end
