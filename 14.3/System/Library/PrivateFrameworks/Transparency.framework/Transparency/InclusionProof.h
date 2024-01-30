@class KTInclusionProofVerifier, MapEntry, NSDictionary, NSData, LogEntry, TransparencyManagedDataStore;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTInclusionProofVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) NSDictionary *metadata;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (retain, nonatomic) MapEntry *mapEntry;
@property (nonatomic) BOOL hasMapEntry;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (nonatomic) BOOL hasPerApplicationTreeEntry;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (unsigned long long)verifyWithError:(id *)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;
- (id)mapLeafWithError:(id *)a0;

@end
