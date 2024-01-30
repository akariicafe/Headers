@class PHAssetCreationRequest, NSArray, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject {
    NSArray *_assetResourceContexts;
}

@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest;
@property (readonly, nonatomic) NSArray *assetResources;
@property (readonly, nonatomic) BOOL didValidateForInsertion;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasCurrentAdjustment;
@property (readonly, nonatomic) BOOL hasOriginalAdjustment;
@property (readonly, nonatomic) BOOL hasAdjustments;
@property (readonly, nonatomic) BOOL hasRAW;
@property (readonly, nonatomic) BOOL hasSpatialOverCapture;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtype;
@property (readonly, nonatomic) PHExternalAssetResource *primaryResource;

+ (id)_primaryAssetResource:(id)a0;
+ (BOOL)_supportsAssetResourceTypes:(id)a0 mediaType:(long long *)a1 mediaSubtype:(unsigned long long *)a2 importedBy:(short)a3;
+ (BOOL)supportsAssetResourceTypes:(id)a0 mediaType:(long long *)a1 importedBy:(short)a2;

- (void).cxx_destruct;
- (BOOL)_extractValidatedAdjustmentsURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (BOOL)_extractValidatedAudioURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (BOOL)_extractValidatedImageURL:(id *)a0 imageData:(id *)a1 fromResource:(id)a2 photoLibrary:(id)a3 error:(id *)a4;
- (BOOL)_extractValidatedVideoURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (id)_validateAssetResourceForAssetCreation:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (BOOL)_validateAssetResourcesForAssetCreation:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)_validatedContextForResource:(id)a0;
- (id)assetResourceWithType:(long long)a0;
- (id)initWithAssetResources:(id)a0 assetCreationRequest:(id)a1;
- (BOOL)validateForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)validatedDataForAssetResource:(id)a0;
- (id)validatedURLForAssetResource:(id)a0;

@end
