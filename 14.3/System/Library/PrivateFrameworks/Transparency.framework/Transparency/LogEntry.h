@class TransparencyManagedDataStore, SignedLogHead, NSDictionary, NSData, NSMutableArray, TransparencyLogEntryVerifier;

@interface LogEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyLogEntryVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) NSDictionary *metadata;
@property (nonatomic) int logType;
@property (retain, nonatomic) SignedLogHead *slh;
@property (nonatomic) BOOL hasSlh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (readonly, nonatomic) unsigned long long hashesOfPeersInPathToRootArray_Count;
@property (copy, nonatomic) NSData *nodeBytes;
@property (nonatomic) unsigned long long nodePosition;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (unsigned long long)verifyWithError:(id *)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;
- (unsigned long long)verifyTLTEntryForPerApplicationLogHead:(id)a0 error:(id *)a1;
- (BOOL)setInclusionResult:(unsigned long long)a0 signedLogHead:(id)a1 error:(id *)a2;

@end
