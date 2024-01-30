@class NSString, NSSet;

@interface CEMConfigurationBase : CEMDeclarationBase

@property (class, readonly, copy) NSString *declarationClass;
@property (class, readonly, copy) NSString *profileType;
@property (class, readonly, copy) NSSet *restrictionPayloadKeys;

- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)payloadUUIDWithIdentifier:(id)a0 outUUIDs:(id)a1 oldUUIDs:(id)a2;
- (id)profilePayloadsByTypeWithAssetProviders:(id)a0;
- (id)synthesizeProfileOutUUIDs:(id)a0 withOldUUIDs:(id)a1 assetProviders:(id)a2;
- (id)synthesizeProfilePayloadOutUUIDs:(id)a0 withOldUUIDs:(id)a1 assetProviders:(id)a2;

@end
