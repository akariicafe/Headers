@class NSString;

@interface PLPrimaryResourceDataStoreKey : PLResourceDataStoreKey <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;
+ (unsigned int)strategyFromExternalResource:(id)a0 asset:(id)a1;

- (id)_initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (id)fileURLForAssetID:(id)a0;
- (id)descriptionForAssetID:(id)a0;
- (id)keyData;
- (id)_initWithKeyStruct:(const void *)a0;
- (BOOL)isEqualToKey:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)uniformTypeIdentifier;
- (id)initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_init;

@end
