@class MCMConcreteContainerIdentityForLibsystem, NSString, MCMUserIdentityCache, MCMContainerPath, NSUUID, NSNumber, MCMUserIdentity;

@interface MCMMetadataMinimal : NSObject <MCMMetadataMinimal>

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct container_object_s { } *)createLibsystemContainerWithError:(id *)a0;
- (BOOL)_persisted;
- (BOOL)_initFromMetadataInDictionary:(id)a0 containerPath:(id)a1 userIdentity:(id)a2 containerClass:(unsigned long long)a3 fsNode:(id)a4 fileURL:(id)a5 userIdentityCache:(id)a6 error:(id *)a7;
- (id)metadataBySettingTransient:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metadataByChangingSchemaVersion:(id)a0;
- (void)_clearPersistedStatus;
- (id)initWithContainerIdentity:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 userIdentityCache:(id)a3;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)a0 containerPath:(id)a1 userIdentity:(id)a2 containerClass:(unsigned long long)a3 userIdentityCache:(id)a4 error:(id *)a5;
- (id)metadataByChangingContainerPath:(id)a0;
- (id)metadataByChangingUUID:(id)a0;
- (id)initByReadingAndValidatingMetadataAtContainerPath:(id)a0 userIdentity:(id)a1 containerClass:(unsigned long long)a2 userIdentityCache:(id)a3 error:(id *)a4;
- (void).cxx_destruct;

@end
