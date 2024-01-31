@class NSString;

@interface CNDatesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)init;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isNonnull;
- (id)standardLabels;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (id /* block */)fromPlistTransform;
- (BOOL)isValidMultiValueValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (Class)labeledValueClass;

@end
