@class NSString, ECSecureMIMETrustEvaluation;

@interface MFCertificateTrustInfo : NSObject {
    struct __SecTrust { } *_unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_uncommentedSender;
}

@property (readonly, nonatomic) unsigned long long certificateType;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
@property (readonly, nonatomic) struct __SecTrust { } *trust;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)a0 trust:(struct __SecTrust { } *)a1 sender:(id)a2;

@end
