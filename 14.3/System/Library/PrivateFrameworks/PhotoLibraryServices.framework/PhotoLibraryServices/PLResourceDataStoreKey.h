@class NSString;

@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)refreshSandboxExtensionForURL:(id)a0 assetID:(id)a1 error:(id *)a2;
+ (BOOL)refreshSandboxExtensionForURL:(id)a0 libraryID:(id)a1 assetUUID:(id)a2 error:(id *)a3;

- (id)keyData;
- (id)uniformTypeIdentifier;
- (BOOL)isEqualToKey:(id)a0;
- (id)fileURLForAssetID:(id)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;

@end
