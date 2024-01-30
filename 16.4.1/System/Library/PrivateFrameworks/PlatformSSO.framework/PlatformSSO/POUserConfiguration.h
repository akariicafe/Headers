@class NSString, LAContext, NSData, POKeychainHelper, NSDate, NSArray;

@interface POUserConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *_sepKeyData;
@property (retain) POKeychainHelper *keychainHelper;
@property (copy) NSString *loginUserName;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *ssoExtensionIdentifier;
@property (readonly) NSData *tokens;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;
@property long long state;
@property unsigned long long loginType;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *sepKey;
@property (nonatomic) struct __SecCertificate { } *sepKeyCertificate;
@property (copy) NSData *_credential;
@property (copy) NSData *_contextData;
@property (retain) LAContext *credentialContext;
@property (copy) NSArray *kerberosStatus;
@property (copy) NSData *pendingSSOTokens;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)tokens;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)currentRefreshToken;
- (id)calculateExpirationForTokens:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)decryptPendingSSOTokensUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (BOOL)encryptPendingSSOTokens:(id)a0 usingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)initWithData:(id)a0 contextData:(id)a1;
- (BOOL)setTokens:(id)a0 returningError:(id *)a1;

@end
