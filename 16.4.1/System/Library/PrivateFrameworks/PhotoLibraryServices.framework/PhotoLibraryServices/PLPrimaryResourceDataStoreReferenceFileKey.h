@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {
    NSURL *_cachedUrl;
    struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 { unsigned char strategy : 8; unsigned char version : 2; unsigned char resourceType : 5; } _keyStruct;
}

+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;

- (id)fileURLForAssetID:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;
- (id)initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (id)keyData;
- (id)uniformTypeIdentifier;
- (void).cxx_destruct;
- (id)initWithResourceType:(unsigned int)a0;
- (id)fileURLForAssetID:(id)a0 inContext:(id)a1;

@end
