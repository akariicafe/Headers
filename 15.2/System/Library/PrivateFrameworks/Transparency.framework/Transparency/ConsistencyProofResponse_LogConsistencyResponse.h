@class NSNumber, SignedObject, NSDictionary, NSMutableArray, TransparencyConsistencyProofVerifier, TransparencyManagedDataStore;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyConsistencyProofVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSNumber *startRevision;
@property (readonly) NSDictionary *metadata;
@property BOOL forwards;
@property (retain, nonatomic) SignedObject *startSlh;
@property (nonatomic) BOOL hasStartSlh;
@property (retain, nonatomic) SignedObject *endSlh;
@property (nonatomic) BOOL hasEndSlh;
@property (retain, nonatomic) NSMutableArray *proofHashesArray;
@property (readonly, nonatomic) unsigned long long proofHashesArray_Count;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (unsigned long long)verifyWithError:(id *)a0;
- (void)setResult:(unsigned long long)a0 treeHead:(id)a1 error:(id)a2;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
