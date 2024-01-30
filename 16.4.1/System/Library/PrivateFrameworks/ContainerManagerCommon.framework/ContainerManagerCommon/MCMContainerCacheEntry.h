@class NSUUID, MCMFSNode, MCMContainerPath, MCMUserIdentityCache, NSNumber, NSString;
@protocol MCMMetadata, MCMContainerCacheUpdatable;

@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheEntry_Internal, MCMContainerCacheEntry>

@property (retain, nonatomic) MCMFSNode *fsNode;
@property (retain, nonatomic) id<MCMMetadata> metadata;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) MCMContainerPath *containerPath;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (weak, nonatomic) id<MCMContainerCacheUpdatable> cache;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL corrupt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)UUIDForURL:(id)a0;
+ (id)_identifierWithGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (id)_UUIDForGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (void)setSchemaVersion:(id)a0 forFD:(int)a1;
+ (void)setIdentifier:(id)a0 forURL:(id)a1;
+ (void)clearAttributesForURL:(id)a0;
+ (void)_setUUID:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;
+ (void)setUUID:(id)a0 forFD:(int)a1;
+ (void)setUUID:(id)a0 forURL:(id)a1;
+ (id)identifierForURL:(id)a0;
+ (id)_schemaVersionForGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (void)clearAttributesForFD:(int)a0;
+ (id)schemaVersionForURL:(id)a0;
+ (void)_setSchemaVersion:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;
+ (id)schemaVersionForFD:(int)a0;
+ (void)setIdentifier:(id)a0 forFD:(int)a1;
+ (void)_setIdentifier:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;
+ (id)UUIDForFD:(int)a0;
+ (id)identifierForFD:(int)a0;
+ (void)setSchemaVersion:(id)a0 forURL:(id)a1;

- (id)fullDescription;
- (id)containerIdentity;
- (BOOL)isEqualToContainerCacheEntry:(id)a0;
- (id)metadataWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 uuid:(id)a3 metadata:(id)a4 userIdentityCache:(id)a5;
- (id)_fabricateMetadataForContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)metadataMinimal;
- (BOOL)verify;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_findUserManagedAssetsDirectoryAtContainerRootURL:(id)a0;
- (id)_readMetadataForIdentifier:(id)a0 containerPath:(id)a1 error:(id *)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetadata:(id)a0 userIdentityCache:(id)a1;
- (id)initFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)_identifierForContainerPath:(id)a0;
- (id)_metadataFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (void).cxx_destruct;

@end
