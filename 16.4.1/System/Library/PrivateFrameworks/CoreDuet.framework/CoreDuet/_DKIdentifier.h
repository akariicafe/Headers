@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property (retain) NSString *stringValue;
@property (retain) _DKIdentifierType *identifierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)fromPBCodable:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)_identifierFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;
+ (id)identifierWithString:(id)a0 type:(id)a1;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)primaryValue;
- (id)toPBCodable;
- (void)encodeWithCoder:(id)a0;
- (long long)integerValue;
- (id)initWithCoder:(id)a0;
- (double)doubleValue;
- (id)objectType;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (long long)compareValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 type:(id)a1;
- (long long)typeCode;

@end
