@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property long long integerValue;
@property (retain) _DKCategoryType *categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (BOOL)supportsSecureCoding;
+ (id)categoryWithInteger:(long long)a0 type:(id)a1;
+ (id)fromPBCodable:(id)a0;
+ (id)_categoryFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;

- (double)doubleValue;
- (id)initWithInteger:(long long)a0 type:(id)a1 cache:(id)a2;
- (void).cxx_destruct;
- (long long)compareValue:(id)a0;
- (long long)typeCode;
- (id)initWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectType;
- (id)toPBCodable;
- (id)stringValue;
- (id)primaryValue;
- (void)encodeWithCoder:(id)a0;

@end
