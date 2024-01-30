@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)areCertificatesValid:(id)a0 forUserIdentifier:(id)a1 error:(id *)a2;
- (BOOL)storeCertificates:(id)a0 userIdentifier:(id)a1 error:(id *)a2;
- (BOOL)isCertificateValid:(id)a0 forUserIdentifier:(id)a1 error:(id *)a2;
- (BOOL)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;

@end
