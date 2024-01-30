@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property long long integerValue;
@property (retain) _DKCategoryType *categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)fromPBCodable:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)_categoryFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;
+ (id)categoryWithInteger:(long long)a0 type:(id)a1;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)stringValue;
- (id)primaryValue;
- (id)toPBCodable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInteger:(long long)a0 type:(id)a1 cache:(id)a2;
- (id)initWithCoder:(id)a0;
- (double)doubleValue;
- (id)objectType;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (long long)compareValue:(id)a0;
- (void).cxx_destruct;
- (long long)typeCode;

@end
