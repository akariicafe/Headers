@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary *_policyDictionary;
}

- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (void).cxx_destruct;
- (id)unsupportedAttributesForLableledContactProperty:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (id)contactRestrictionsForLabeledProperty:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
