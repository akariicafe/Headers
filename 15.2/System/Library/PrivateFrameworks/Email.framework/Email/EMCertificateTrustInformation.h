@class NSString, NSArray, ECSecureMIMETrustEvaluation, NSObject;
@protocol OS_os_log, ECEmailAddressConvertible;

@interface EMCertificateTrustInformation : NSObject <EFLoggable, NSSecureCoding>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct __SecTrust { } *trust;
@property (nonatomic) unsigned long long certificateType;
@property (retain, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
@property (copy, nonatomic) NSString *sender;
@property (nonatomic) BOOL _forceNetworkAccessAllowed;
@property (readonly, copy, nonatomic) id<ECEmailAddressConvertible> firstEmailAddress;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { } *)a0 certificateType:(unsigned long long)a1 sender:(id)a2;
- (void)evaluateTrustWithOptions:(unsigned long long)a0;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end
