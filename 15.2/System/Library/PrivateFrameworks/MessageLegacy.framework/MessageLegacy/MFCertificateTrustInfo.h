@class NSString;

@interface MFCertificateTrustInfo : NSObject {
    NSString *_uncommentedSender;
}

@property (readonly, nonatomic) unsigned long long certificateType;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) struct __SecTrust { } *trust;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) unsigned long long keychainStatus;
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, nonatomic) BOOL hasTrustException;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)a0 trust:(struct __SecTrust { } *)a1 sender:(id)a2;
- (void)addTrustException;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (void)removeCertificateFromKeychain;

@end
