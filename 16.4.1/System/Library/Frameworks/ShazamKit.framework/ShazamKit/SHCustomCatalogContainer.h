@class NSArray, SHJSONLCustomCatalogTransformer, NSData;
@protocol SHCustomCatalogStorage;

@interface SHCustomCatalogContainer : NSObject

@property (readonly, nonatomic) id<SHCustomCatalogStorage> container;
@property (readonly, nonatomic) SHJSONLCustomCatalogTransformer *transformer;
@property (readonly, nonatomic) NSArray *referenceSignatures;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)customCatalogURLFromURL:(id)a0 error:(id *)a1;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (BOOL)loadFromData:(id)a0 error:(id *)a1;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;

@end
