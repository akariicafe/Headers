@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {
    NSURL *_cachedUrl;
    unsigned char _onceToken;
    struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 { unsigned char strategy : 8; unsigned char version : 2; unsigned char resourceType : 5; } _keyStruct;
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;

- (id)fileURLForAssetID:(id)a0;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)a0;
- (id)uniformTypeIdentifier;
- (id)initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (id)initWithResourceType:(unsigned int)a0;
- (void).cxx_destruct;
- (id)fileURLForAssetID:(id)a0 inContext:(id)a1;

@end
