@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNonnull;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (Class)labeledValueClass;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (id)summarizationKeys;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (BOOL)abPropertyID:(int *)a0;

@end
