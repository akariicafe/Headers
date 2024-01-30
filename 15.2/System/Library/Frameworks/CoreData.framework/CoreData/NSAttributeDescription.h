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
@property BOOL allowsCloudEncryption;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)stringForAttributeType:(unsigned long long)a0;

- (id)_initWithType:(unsigned long long)a0;
- (BOOL)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (void)_createCachesAndOptimizeState;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0 skipIndexCheck:(BOOL)a1;
- (id)_rawValidationWarnings;
- (BOOL)_isEqualWithoutIndex:(id)a0;
- (id)description;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isIndexed;
- (id)validationPredicates;
- (Class)_attributeValueClass;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_propertyType;
- (int)_encodedAttributeFlagsForFlags:(int)a0;
- (id)validationWarnings;
- (BOOL)storesBinaryDataExternally;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (BOOL)_comparePredicatesAndWarnings:(id)a0;
- (BOOL)_attributeTypeIsSchemaEqual:(unsigned long long)a0;
- (void)dealloc;
- (id)_rawValidationPredicates;

@end
