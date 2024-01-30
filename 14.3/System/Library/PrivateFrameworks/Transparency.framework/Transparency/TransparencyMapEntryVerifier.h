@class NSData, TransparencyTrustedKeyStore;

@interface TransparencyMapEntryVerifier : NSObject

@property (retain) NSData *entryPosition;
@property (retain) TransparencyTrustedKeyStore *trustedKeyStore;

+ (id)peerIndexAtDepth:(unsigned long long)a0 leafIndex:(id)a1;
+ (id)leafHash:(id)a0 index:(id)a1 treeId:(unsigned long long)a2;
+ (id)emptyAtDepth:(unsigned long long)a0 leafIndex:(id)a1 treeId:(unsigned long long)a2;
+ (id)interiorNodeForLeftData:(id)a0 rightData:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)verifyMapEntryWithMapLeaf:(id)a0 hashesToRoot:(id)a1 signedMapHead:(id)a2 error:(id *)a3;
- (id)initWithPositon:(id)a0 trustedKeyStore:(id)a1;
- (void)storeSMHSignatureFailure:(unsigned long long)a0 smh:(id)a1 error:(id *)a2;
- (BOOL)verifyInclusionOfMapLeaf:(id)a0 position:(id)a1 treeHead:(id)a2 treeId:(unsigned long long)a3 hashPath:(id)a4 error:(id *)a5;

@end
