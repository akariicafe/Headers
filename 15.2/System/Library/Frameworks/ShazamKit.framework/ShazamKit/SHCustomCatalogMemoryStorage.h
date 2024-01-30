@class NSMutableDictionary, NSArray, NSString, NSError;

@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>

@property (retain, nonatomic) NSMutableDictionary *signatures;
@property (retain, nonatomic) NSMutableDictionary *mediaItems;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *referenceSignatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)jsonObjectRepresentation:(id *)a0;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (void)producedMediaItem:(id)a0 forID:(id)a1;
- (void)producedSignature:(id)a0 forID:(id)a1;

@end
