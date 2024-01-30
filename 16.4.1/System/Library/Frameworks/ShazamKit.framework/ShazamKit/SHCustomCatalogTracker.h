@class NSArray, SHSignatureChunker, SHCustomCatalog;

@interface SHCustomCatalogTracker : NSObject

@property (readonly, nonatomic) SHSignatureChunker *querySignatureChunker;
@property (readonly, nonatomic) SHCustomCatalog *customCatalog;
@property (readonly, nonatomic) NSArray *querySignatureChunks;

- (void).cxx_destruct;
- (id)initWithQuerySignature:(id)a0 customCatalog:(id)a1;
- (id)trackQuerySignatureChunk:(id)a0 usingReferenceTrackID:(unsigned long long)a1 error:(id *)a2;

@end
