@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (nonatomic) unsigned int sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBoxRect;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)a0 library:(id)a1 completion:(id /* block */)a2;
+ (id)PLJunkSceneClassificationIDForLabel:(id)a0;
+ (id)insertIntoPhotoLibrary:(id)a0 asset:(id)a1 sceneIdentifier:(int)a2 confidence:(double)a3 packedBoundingBoxRect:(long long)a4;

- (id)debugLogDescription;

@end
