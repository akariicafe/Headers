@class NSString, CertUITrustManager, NSObject, EMCertificateTrustInformation;
@protocol OS_os_log;

@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMCertificateTrustInformation *trustInformation;
@property (readonly, nonatomic) CertUITrustManager *keychainManager;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) BOOL hasTrustException;
@property (readonly, nonatomic) unsigned long long keychainStatus;
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, copy, nonatomic) NSString *addressForSaving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTrustInformation:(id)a0;
- (void)addTrustException;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (void)removeCertificateFromKeychain;

@end
