@class NSString, NSArray, NSDictionary, NSData, NSEntityDescription, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct _NSExtraPropertyIVars { id x0; long long x1; long long x2; } *_extraIvars;
    NSMutableDictionary *_userInfo;
    struct __propertyDescriptionFlags { unsigned char _isReadOnly : 1; unsigned char _isTransient : 1; unsigned char _isOptional : 1; unsigned char _isIndexed : 1; unsigned char _skipValidation : 1; unsigned char _isIndexedBySpotlight : 1; unsigned char _isStoredInExternalRecord : 1; unsigned char _extraIvarsAreInDataBlob : 1; unsigned char _isOrdered : 1; unsigned char _hasMaxValueInExtraIvars : 1; unsigned char _hasMinValueInExtraIvars : 1; unsigned char _storeBinaryDataExternally : 1; unsigned char _preserveValueOnDelete : 1; unsigned char _isTriggerBacked : 1; unsigned char _isFileBackedFuture : 1; unsigned char _reservedPropertyDescription : 1; } _propertyDescriptionFlags;
    short _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy, nonatomic) NSString *name;
@property (getter=isOptional) BOOL optional;
@property (getter=isTransient) BOOL transient;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (getter=isIndexed) BOOL indexed;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight;
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord;
@property (copy) NSString *renamingIdentifier;

+ (void)initialize;

- (BOOL)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (void)_createCachesAndOptimizeState;
- (void)setReadOnly:(BOOL)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)_isSchemaEqual:(id)a0;
- (id)_rawValidationWarnings;
- (id)_initWithName:(id)a0;
- (BOOL)isReadOnly;
- (void)_appendPropertyFieldsToData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5;
- (unsigned long long)_propertyType;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setOrdered:(BOOL)a0;
- (BOOL)_skipValidation;
- (BOOL)isStoredInTruth;
- (void)_initializeExtraIVars;
- (void)setValidationPredicates:(id)a0 withValidationWarnings:(id)a1;
- (BOOL)isSpotlightIndexed;
- (void)setSpotlightIndexed:(BOOL)a0;
- (BOOL)isStoredInTruthFile;
- (void)setStoredInTruthFile:(BOOL)a0;
- (void)setStoredInTruth:(BOOL)a0;
- (void)dealloc;
- (BOOL)_isToManyRelationship;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_comparePredicatesAndWarnings:(id)a0;
- (id)_rawValidationPredicates;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)elementID;
- (void)_stripForMigration;
- (BOOL)_isRelationship;
- (BOOL)_isFileBackedFuture;
- (BOOL)_storeBinaryDataExternally;
- (BOOL)_isEditable;
- (void)_restoreValidation;
- (long long)_entitysReferenceID;
- (id)_underlyingProperty;
- (struct _NSExtraPropertyIVars { id x0; long long x1; long long x2; } *)_extraIVars;
- (BOOL)_hasMinValueInExtraIvars;
- (BOOL)_hasMaxValueInExtraIvars;
- (BOOL)_preserveValueOnDelete;
- (BOOL)_isTriggerBacked;
- (void)_replaceValidationPredicates:(id)a0 andWarnings:(id)a1;
- (void)_setEntity:(id)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)setElementID:(id)a0;
- (void)_setEntitysReferenceID:(long long)a0;
- (void)_throwIfNotEditable;
- (BOOL)_isOrdered;
- (void)encodeWithCoder:(id)a0;

@end
