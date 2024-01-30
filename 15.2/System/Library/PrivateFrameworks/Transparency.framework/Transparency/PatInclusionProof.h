@class LogEntry, NSDictionary, KTPatInclusionProofVerifier, TransparencyManagedDataStore;

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatInclusionProofVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) unsigned long long patLogBeginningMs;
@property (readonly) unsigned long long tltLogBeginningMs;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (nonatomic) BOOL hasPerApplicationTreeEntry;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (unsigned long long)verifyWithError:(id *)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;
- (unsigned long long)verifyConfigProof:(id *)a0;
- (id)vrfPublicKeyWithError:(id *)a0;
- (int)earliestCurrentTreeVersionWithError:(id *)a0;
- (id)patSigningKeyWithError:(id *)a0;
- (int)earliestNextTreeVersionWithError:(id *)a0;

@end
