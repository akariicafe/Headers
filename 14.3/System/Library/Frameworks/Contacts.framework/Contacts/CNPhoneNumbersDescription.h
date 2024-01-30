@class NSString;

@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)standardLabels;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (id)CNValueForContact:(id)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (BOOL)isNonnull;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id)equivalentLabelSets;
- (id)stringForIndexingForContact:(id)a0;
- (id /* block */)plistTransform;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;

@end
