@class NSString;

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}

+ (id)_replacementPathExtensionForType:(unsigned int)a0;
+ (id)_keyDataWithRelativePath:(id)a0 type:(unsigned int)a1;
+ (id)_relativeFilePathForPersonID:(id)a0 albumID:(id)a1 dcimDirectory:(id)a2 fileName:(id)a3;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)a0;

- (unsigned int)resourceType;
- (id)keyData;
- (BOOL)isDerivative;
- (void).cxx_destruct;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (BOOL)isEqualToKey:(id)a0;
- (id)fileURLForAssetID:(id)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (unsigned int)recipeIDForAssetID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (id)initWithKeyStruct:(const void *)a0;

@end
