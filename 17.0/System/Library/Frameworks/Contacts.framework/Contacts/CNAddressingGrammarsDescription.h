@interface CNAddressingGrammarsDescription : CNAddressingGrammarsEncryptedDescription

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)init;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isNonnull;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)applyCNValue:(id)a0 toArray:(id)a1 identifier:(id)a2 legacyIdentifier:(int)a3 label:(id)a4;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;

@end
