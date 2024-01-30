@interface CNPermissivePolicy : CNPolicy

+ (BOOL)supportsSecureCoding;
+ (id)sharedPermissivePolicy;

- (id)initWithCoder:(id)a0;
- (BOOL)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (BOOL)shouldRemoveContact:(id)a0;
- (BOOL)shouldSetValue:(id)a0 ofProperty:(id)a1 onContact:(id)a2 replacementValue:(id *)a3;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;
- (id)unsupportedKeyPathsForContactProperty:(id)a0;

@end
