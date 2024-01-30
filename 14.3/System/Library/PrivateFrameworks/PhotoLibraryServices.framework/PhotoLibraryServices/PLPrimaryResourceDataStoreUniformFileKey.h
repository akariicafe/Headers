@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties>

@property (nonatomic) struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned char strategy : 8; unsigned char version : 2; unsigned char resourceVersion : 2; unsigned char resourceType : 5; unsigned char recipeClass : 4; unsigned short recipeVariationID : 15; unsigned char isDerivative : 1; unsigned char extensionCasing : 2; unsigned char fileType : 8; } keyStruct;

+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)_fileURLFromKeyStruct:(struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned char x0 : 8; unsigned char x1 : 2; unsigned char x2 : 2; unsigned char x3 : 5; unsigned char x4 : 4; unsigned short x5 : 15; unsigned char x6 : 1; unsigned char x7 : 2; unsigned char x8 : 8; } *)a0 assetID:(id)a1;

- (unsigned int)resourceType;
- (id)keyData;
- (BOOL)isDerivative;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (unsigned int)recipeIDForAssetID:(id)a0;
- (id)initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (id)initWithFilePath:(id)a0 resourceVersion:(unsigned int)a1 resourceType:(unsigned int)a2 recipeID:(unsigned int)a3;
- (id)initWithKeyStruct:(const void *)a0;

@end
