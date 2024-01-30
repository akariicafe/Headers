@class TransparencyTrustedKeyStore;

@interface TransparencyLogEntryVerifier : NSObject

@property (retain) TransparencyTrustedKeyStore *trustedKeyStore;

- (void).cxx_destruct;
- (id)initWithTrustedKeyStore:(id)a0;
- (unsigned long long)verifyLogEntryWithLogLeaf:(id)a0 position:(unsigned long long)a1 hashesToRoot:(id)a2 signedLogHead:(id)a3 error:(id *)a4;
- (BOOL)verifyInclusionOfLogLeaf:(id)a0 position:(unsigned long long)a1 treeSize:(unsigned long long)a2 treeHead:(id)a3 hashPath:(id)a4 error:(id *)a5;

@end
