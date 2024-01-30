@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {
    unsigned short _type;
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id _defaultValue;
}

@property BOOL preserveValueOnDeletionInPersistentHistory;
@property BOOL isFileBackedFuture;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *valueTransformerName;
@property BOOL allowsExternalBinaryDataStorage;
@property BOOL preservesValueInHistoryOnDeletion;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)stringForAttributeType:(unsigned long long)a0;
+ (id)_classNameForType:(unsigned long long)a0;

- (BOOL)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (Class)_attributeValueClass;
- (id)validationWarnings;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)setStoresBinaryDataExternally:(BOOL)a0;
- (id)_rawValidationWarnings;
- (BOOL)_attributeTypeIsSchemaEqual:(unsigned long long)a0;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)a0;
- (unsigned long long)_propertyType;
- (BOOL)isIndexed;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (long long)_canConvertPredicate:(id)a0 andWarning:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithType:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_comparePredicatesAndWarnings:(id)a0;
- (id)_rawValidationPredicates;
- (id)description;
- (void)_setPreserveValueOnDeletionInPersistentHistory:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)validationPredicates;
- (BOOL)storesBinaryDataExternally;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
