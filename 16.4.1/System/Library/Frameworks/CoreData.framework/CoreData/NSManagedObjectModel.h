@class NSArray, NSDictionary, NSSet, _PFVMData, NSMutableDictionary;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {
    _PFVMData *_dataForOptimization;
    id *_optimizationHints;
    id *_additionalPrivateIvars;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags { unsigned char _isInUse : 1; unsigned char _isImmutable : 1; unsigned char _isOptimizedForEncoding : 1; unsigned char _hasEntityWithConstraints : 1; unsigned char _skipUserInfoTombstones : 1; unsigned int _reservedEntityDescription : 27; } _managedObjectModelFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setModelsReferenceIDOffset:) long long _modelsReferenceIDOffset;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (retain) NSArray *entities;
@property (readonly) NSArray *configurations;
@property (retain) NSDictionary *localizationDictionary;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (copy) NSSet *versionIdentifiers;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;

+ (id)mergedModelFromBundles:(id)a0;
+ (long long)_debugOptimizedModelLayout;
+ (id)mergedModelFromBundles:(id)a0 forStoreMetadata:(id)a1;
+ (id)modelByMergingModels:(id)a0;
+ (id)modelByMergingModels:(id)a0 forStoreMetadata:(id)a1;
+ (BOOL)versionHashes:(id)a0 compatibleWithStoreMetadata:(id)a1;
+ (id)versionsHashesForModelAtURL:(id)a0 error:(id *)a1;

- (id)versionHash;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:(id)a0;
- (void)_restoreValidation;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_throwIfNotEditable;
- (void)_stripForMigration;
- (id)initWithContentsOfURL:(id)a0;
- (id)_modelForVersionHashes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)immutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithContentsOfOptimizedURL:(id)a0;
- (void)_addEntity:(id)a0;
- (id)_initWithContentsOfURL:(id)a0 options:(unsigned long long)a1;
- (void)_setIsEditable:(BOOL)a0;
- (void)_flattenProperties;
- (id)_initWithEntities:(id)a0;
- (id)_localizationPolicy;
- (id)_optimizedEncoding:(id *)a0;
- (void)_setIsEditable:(BOOL)a0 optimizationStyle:(unsigned long long)a1;
- (void)_setLocalizationPolicy:(id)a0;
- (id)entitiesForConfiguration:(id)a0;
- (id)fetchRequestFromTemplateWithName:(id)a0 substitutionVariables:(id)a1;
- (id)fetchRequestTemplateForName:(id)a0;
- (id)initWithContentsOfURL:(id)a0 forStoreMetadata:(id)a1;
- (BOOL)isConfiguration:(id)a0 compatibleWithStoreMetadata:(id)a1;
- (void)setEntities:(id)a0 forConfiguration:(id)a1;
- (void)setFetchRequestTemplate:(id)a0 forName:(id)a1;

@end
