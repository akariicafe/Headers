@class NSString, NSArray;

@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SEL readSelector;
@property (readonly, nonatomic) SEL writeSelector;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isNonnull;
@property (readonly, copy, nonatomic) id /* block */ valueForKeyTransform;
@property (readonly, nonatomic) id nilValue;
@property (readonly, nonatomic) NSArray *equivalentLabelSets;

- (void)assertValueType:(id)a0;
- (void)copyFromABPerson:(void *)a0 toContact:(id)a1;
- (BOOL)setABValue:(void *)a0 onABPerson:(void *)a1 error:(struct __CFError **)a2;
- (void).cxx_destruct;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyABMultivalueValueBytes:(char *)a0 length:(unsigned long long)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4 toCNMultivalueRepresentation:(id)a5;
- (BOOL)abPropertyID:(int *)a0;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (id)CNValueForContact:(id)a0;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)initWithCoder:(id)a0;
- (void *)ABValueFromCNValue:(id)a0;
- (void *)ABValueForABPerson:(void *)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (BOOL)supportsABLazyLoading;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 equalToEmptyEquivalentOrValue:(id)a1;
- (id)CNValueFromABValue:(void *)a0;
- (id)initWithKey:(id)a0 readSelector:(SEL)a1 writeSelector:(SEL)a2;
- (BOOL)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (id)stringForIndexingForContact:(id)a0;
- (BOOL)setCNValue:(id)a0 onABPerson:(void *)a1 withDependentPropertiesContext:(id)a2 error:(id *)a3;
- (id)unifiableLabelsForLabel:(id)a0;
- (id)CNMutableValueForABMultivalue;
- (BOOL)applyDictionary:(id)a0 identifier:(id)a1 legacyIdentifier:(int)a2 label:(id)a3 toCNMultivalueRepresentation:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)valueWithResetIdentifiers:(id)a0;

@end
