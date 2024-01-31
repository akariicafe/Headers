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

- (BOOL)applyABMultivalueValueBytes:(char *)a0 length:(unsigned long long)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4 toCNMultivalueRepresentation:(id)a5;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (id)CNValueFromABValue:(void *)a0;
- (void *)ABValueFromCNValue:(id)a0;
- (unsigned int)abPropertyType;
- (id)localizedStringForLabel:(id)a0;
- (void *)ABMutableMultiValueForABPerson:(void *)a0;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (struct __CFString { } *)ABMultiValueLabelFromCNLabeledValueLabel:(id)a0;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0 gettersByABKeys:(id)a1;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString { } *)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0 destinationClass:(Class)a1 settersByABKeys:(id)a2;
- (id)CNMutableValueForABMultivalue;
- (BOOL)applyCNValue:(id)a0 toArray:(id)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4;
- (BOOL)applyDictionary:(id)a0 identifier:(id)a1 legacyIdentifier:(int)a2 label:(id)a3 toCNMultivalueRepresentation:(id)a4;
- (void)assertValueType:(id)a0;
- (BOOL)isValidMultiValueValue:(id)a0 error:(id *)a1;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)stringForIndexingForContact:(id)a0;
- (id)valueWithResetIdentifiers:(id)a0;

@end
