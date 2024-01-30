@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration;

- (id)init;
- (id)subject;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)a0;
- (id)keyParameters;
- (id)certificateParametersWithCMSAlgorithm:(const void *)a0;
- (void)safeRelease:(void *)a0;
- (void)addClientAndServerAuthEKUsToParameters:(id)a0;
- (struct __SecIdentity { } *)makeIdentityRefWithError:(id *)a0;

@end
