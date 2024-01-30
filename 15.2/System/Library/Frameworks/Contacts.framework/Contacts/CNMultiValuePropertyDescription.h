@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) NSArray *managedLabels;
@property (readonly, nonatomic) Class labeledValueClass;
@property (readonly, nonatomic) id /* block */ plistTransform;
@property (readonly, nonatomic) id /* block */ fromPlistTransform;

- (void *)ABValueFromCNValue:(id)a0;
- (unsigned int)abPropertyType;
- (id)stringForIndexingForContact:(id)a0;
- (BOOL)isValidMultiValueValue:(id)a0 error:(id *)a1;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)localizedStringForLabel:(id)a0;
- (BOOL)applyABMultivalueValueBytes:(char *)a0 length:(unsigned long long)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4 toCNMultivalueRepresentation:(id)a5;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (id)CNMutableValueForABMultivalue;
- (BOOL)applyDictionary:(id)a0 identifier:(id)a1 legacyIdentifier:(int)a2 label:(id)a3 toCNMultivalueRepresentation:(id)a4;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)applyCNValue:(id)a0 toArray:(id)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)valueWithResetIdentifiers:(id)a0;
- (void)assertValueType:(id)a0;
- (void *)ABMutableMultiValueForABPerson:(void *)a0;
- (id)CNValueFromABValue:(void *)a0;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString { } *)a0;
- (struct __CFString { } *)ABMultiValueLabelFromCNLabeledValueLabel:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0 destinationClass:(Class)a1 settersByABKeys:(id)a2;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0 gettersByABKeys:(id)a1;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;

@end
