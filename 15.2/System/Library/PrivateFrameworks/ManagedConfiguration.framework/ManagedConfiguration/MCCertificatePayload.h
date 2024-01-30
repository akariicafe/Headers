@class NSString, NSData, NSDate, NSNumber;

@interface MCCertificatePayload : MCPayload {
    NSNumber *_isIdentity;
    NSNumber *_isRoot;
    NSNumber *_expiryInterval;
    NSString *_certSubject;
    NSString *_certIssuer;
}

@property (copy, nonatomic) NSString *installedOnDeviceID;
@property (retain, nonatomic) NSData *certificatePersistentID;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) BOOL isFullyTrustedRootCert;
@property (readonly, nonatomic) BOOL isIdentity;
@property (readonly, retain, nonatomic) NSDate *expiry;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isMDMClientIdentity;

- (struct __SecCertificate { } *)copyCertificate;
- (id)issuer;
- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (struct __SecIdentity { } *)copyIdentityFromKeychain;
- (id)certificateSubject;
- (id)verboseDescription;

@end
