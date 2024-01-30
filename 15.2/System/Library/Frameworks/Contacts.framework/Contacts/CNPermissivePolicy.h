@interface CNPermissivePolicy : CNPolicy

+ (id)sharedPermissivePolicy;

- (BOOL)shouldAddContact:(id)a0;
- (BOOL)shouldRemoveContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)isReadonly;
- (id)initWithCoder:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (id)unsupportedAttributesForLableledContactProperty:(id)a0;
- (id)unsupportedKeyPathsForContactProperty:(id)a0;
- (BOOL)shouldSetValue:(id)a0 ofProperty:(id)a1 onContact:(id)a2 replacementValue:(id *)a3;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
