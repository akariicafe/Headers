@class TransparencyManagedDataStore, NSMutableArray, NSDictionary, NSData, SignedObject, TransparencyMapEntryVerifier;

@interface MapEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyMapEntryVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) SignedObject *smh;
@property (nonatomic) BOOL hasSmh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (readonly, nonatomic) unsigned long long hashesOfPeersInPathToRootArray_Count;
@property (copy, nonatomic) NSData *mapLeaf;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (unsigned long long)verifyWithError:(id *)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
