@class NSData, NSString, NSArray, NSMutableDictionary, NSDictionary, NSExpression, NSManagedObjectModel;

@interface NSEntityDescription : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_propertyRanges;
    struct __entityDescriptionFlags { unsigned char _isAbstract : 1; unsigned char _shouldValidateOnSave : 1; unsigned char _isImmutable : 1; unsigned char _isFlattened : 1; unsigned char _skipValidation : 1; unsigned char _hasPropertiesIndexedBySpotlight : 1; unsigned char _hasPropertiesStoredInTruthFile : 1; unsigned char _rangesAreInDataBlob : 1; unsigned char _hasAttributesWithExternalDataReferences : 1; unsigned char _hasNonstandardPrimitiveProperties : 2; unsigned char _hasUniqueProperties : 1; unsigned char _hasChildrenWithUniqueProperties : 1; unsigned char _validationUniqueProperties : 1; unsigned char _isPersistentHistoryEntity : 1; unsigned char _hasAttributesWithFileBackedFutures : 1; unsigned short _reservedEntityDescription : 16; } _entityDescriptionFlags;
    struct _ExtraEntityIVars { id x0; id x1; id x2; id x3; id x4; id x5; struct os_unfair_lock_s { unsigned int x0; } x6; int x7; void *x8; } *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long long _modelsReferenceIDForEntity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *managedObjectClassName;
@property (copy) NSString *name;
@property (getter=isAbstract) BOOL abstract;
@property (readonly, copy) NSDictionary *subentitiesByName;
@property (retain) NSArray *subentities;
@property (readonly) NSEntityDescription *superentity;
@property (readonly, copy) NSDictionary *propertiesByName;
@property (retain) NSArray *properties;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, copy) NSDictionary *attributesByName;
@property (readonly, copy) NSDictionary *relationshipsByName;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;
@property (copy) NSString *renamingIdentifier;
@property (copy) NSArray *indexes;
@property (retain) NSArray *uniquenessConstraints;
@property (retain) NSArray *compoundIndexes;
@property (retain, nonatomic) NSExpression *coreSpotlightDisplayNameExpression;

+ (void)initialize;
+ (id)entityForName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertNewObjectForEntityForName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_MOClassName;

- (void)_createCachesAndOptimizeState;
- (BOOL)_isSchemaEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)_initWithName:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)attributeKeys;
- (void)_setIsEditable:(BOOL)a0;
- (unsigned long long)hash;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 uniquedMappings:(id)a5 entities:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)retain;
- (void)_flattenProperties;
- (BOOL)isEqual:(id)a0;
- (id)elementID;
- (BOOL)isKindOfEntity:(id)a0;
- (BOOL)_isEditable;
- (void)_addSubentity:(id)a0;
- (void)_addProperty:(id)a0;
- (BOOL)_isFlattened;
- (id)_versionHashInStyle:(unsigned long long)a0;
- (id)relationshipsWithDestinationEntity:(id)a0;
- (void)setElementID:(id)a0;
- (id)keypathsToPrefetchForDeletePropagation;
- (id)_localRelationshipNamed:(id)a0;
- (void)_setIsFlattened:(BOOL)a0;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)inverseForRelationshipKey:(id)a0;
- (BOOL)_hasDerivedAttributes;
- (void)_throwIfNotEditable;
- (void)encodeWithCoder:(id)a0;

@end
