@interface PLResourceModelValidationError : NSError

+ (id)allPossibleErrorCodes;
+ (id)unexpectedLocalResourceError:(id)a0;
+ (id)localAvailabilityInconsistencyErrorForResource:(id)a0;
+ (id)missingRequiredResourcesErrorForAsset:(id)a0 message:(id)a1;
+ (id)duplicateResourceErrorAmongResources:(id)a0 forAsset:(id)a1;
+ (id)duplicatedCPLTypeAssetErrorForAsset:(id)a0 cplType:(unsigned long long)a1;
+ (id)malformedKeyErrorForKey:(id)a0 resource:(id)a1;
+ (id)malformedTableThumbnailKeyErrorForKey:(id)a0 assetID:(id)a1;
+ (id)unreachableKeyErrorForKey:(id)a0 atURL:(id)a1 resource:(id)a2;
+ (id)unreachableTableThumbnailErrorForKey:(id)a0 assetID:(id)a1;
+ (id)unreachableFileThumbnailErrorForKey:(id)a0 assetID:(id)a1;

- (id)init;
- (id)description;

@end
