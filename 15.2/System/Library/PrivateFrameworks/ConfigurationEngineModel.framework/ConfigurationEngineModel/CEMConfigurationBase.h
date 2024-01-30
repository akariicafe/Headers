@class NSString, NSSet;

@interface CEMConfigurationBase : CEMDeclarationBase

@property (class, readonly, copy) NSString *declarationClass;
@property (class, readonly, copy) NSString *profileType;
@property (class, readonly, copy) NSSet *restrictionPayloadKeys;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;
- (id)synthesizeProfilePayloadOutUUIDs:(id)a0 withOldUUIDs:(id)a1 assetProviders:(id)a2;
- (id)profilePayloadsByTypeWithAssetProviders:(id)a0;
- (id)payloadUUIDWithIdentifier:(id)a0 outUUIDs:(id)a1 oldUUIDs:(id)a2;
- (id)synthesizeProfileOutUUIDs:(id)a0 withOldUUIDs:(id)a1 assetProviders:(id)a2;

@end
