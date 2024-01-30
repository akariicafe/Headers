@class NSArray, NSString, HKInspectableValue;

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *collection;
@property (readonly, nonatomic) NSArray *elementTags;
@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) HKInspectableValue *inspectableValue;
@property (readonly, nonatomic) HKInspectableValue *min;
@property (readonly, nonatomic) HKInspectableValue *max;
@property (readonly, nonatomic) NSArray *inspectableValues;
@property (readonly, nonatomic) NSString *unitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexableKeyPathsWithPrefix:(id)a0;
+ (BOOL)hasNoValue:(id)a0;
+ (id)inspectableValueCollectionRangeWithMin:(id)a0 max:(id)a1;
+ (id)inspectableValueCollectionRangeWithMin:(id)a0;
+ (id)inspectableValueCollectionRangeWithMax:(id)a0;
+ (id)inspectableValueCollectionSingleWithValue:(id)a0;
+ (id)inspectableValueCollectionListWithValues:(id)a0;
+ (id)inspectableValueCollectionTaggedListWithValues:(id)a0 tags:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)valuesWithTag:(id)a0;
- (id)_initWithCollectionType:(long long)a0 collection:(id)a1;
- (id)_initWithCollectionType:(long long)a0 collection:(id)a1 tags:(id)a2;
- (void)_assertCollectionType;
- (void)encodeWithCoder:(id)a0;

@end
