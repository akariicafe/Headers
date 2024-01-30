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
    struct __propertyDescriptionFlags { unsigned char _isReadOnly : 1; unsigned char _isTransient : 1; unsigned char _isOptional : 1; unsigned char _isIndexed : 1; unsigned char _skipValidation : 1; unsigned char _isIndexedBySpotlight : 1; unsigned char _isStoredInExternalRecord : 1; unsigned char _extraIvarsAreInDataBlob : 1; unsigned char _isOrdered : 1; unsigned char _hasMaxValueInExtraIvars : 1; unsigned char _hasMinValueInExtraIvars : 1; unsigned char _storeBinaryDataExternally : 1; unsigned char _preserveValueOnDelete : 1; unsigned char _isTriggerBacked : 1; unsigned char _isFileBackedFuture : 1; unsigned char _allowsCloudEncryption : 1; } _propertyDescriptionFlags;
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

- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (void)setReadOnly:(BOOL)a0;
- (void)_appendPropertyFieldsToData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5;
- (BOOL)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (BOOL)isReadOnly;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (void)_createCachesAndOptimizeState;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0 skipIndexCheck:(BOOL)a1;
- (id)_rawValidationWarnings;
- (BOOL)_isEqualWithoutIndex:(id)a0;
- (id)description;
- (void)_setEntity:(id)a0;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)_isRelationship;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)_isToManyRelationship;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)elementID;
- (BOOL)_isFileBackedFuture;
- (BOOL)_storeBinaryDataExternally;
- (long long)_entitysReferenceID;
- (id)initWithCoder:(id)a0;
- (id)_initWithName:(id)a0;
- (id)_underlyingProperty;
- (struct _NSExtraPropertyIVars { id x0; long long x1; long long x2; } *)_extraIVars;
- (BOOL)_hasMinValueInExtraIvars;
- (BOOL)_hasMaxValueInExtraIvars;
- (BOOL)_allowsCloudEncryption;
- (BOOL)_preserveValueOnDelete;
- (BOOL)_isTriggerBacked;
- (void)_replaceValidationPredicates:(id)a0 andWarnings:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)setElementID:(id)a0;
- (BOOL)_skipValidation;
- (void)_setEntitysReferenceID:(long long)a0;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (unsigned long long)_propertyType;
- (BOOL)_isOrdered;
- (BOOL)_comparePredicatesAndWarnings:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_setOrdered:(BOOL)a0;
- (int)_encodedPropertyFlagsForFlags:(int)a0;
- (void)_initializeExtraIVars;
- (void)setValidationPredicates:(id)a0 withValidationWarnings:(id)a1;
- (BOOL)isSpotlightIndexed;
- (void)setSpotlightIndexed:(BOOL)a0;
- (BOOL)isStoredInTruthFile;
- (void)setStoredInTruthFile:(BOOL)a0;
- (BOOL)isStoredInTruth;
- (void)setStoredInTruth:(BOOL)a0;
- (id)_rawValidationPredicates;

@end
