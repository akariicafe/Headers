@interface CNPermissivePolicy : CNPolicy

+ (id)sharedPermissivePolicy;

- (BOOL)shouldRemoveContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (id)unsupportedAttributesForLableledContactProperty:(id)a0;
- (id)unsupportedKeyPathsForContactProperty:(id)a0;
- (BOOL)shouldSetValue:(id)a0 ofProperty:(id)a1 onContact:(id)a2 replacementValue:(id *)a3;
- (BOOL)isContactPropertySupported:(id)a0;
- (BOOL)isReadonly;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
