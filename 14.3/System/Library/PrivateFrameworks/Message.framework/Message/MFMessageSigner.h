@class NSString, MFCertificateTrustInfo, MFError;

@interface MFMessageSigner : NSObject {
    int _status;
}

@property (readonly, nonatomic) MFCertificateTrustInfo *signingCertificateTrustInfo;
@property (readonly, nonatomic) MFCertificateTrustInfo *encryptionCertificateTrustInfo;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) MFError *error;

- (id)initWithSender:(id)a0 signingTrust:(struct __SecTrust { } *)a1 encryptionTrust:(struct __SecTrust { } *)a2 verification:(int)a3;
- (void).cxx_destruct;

@end
