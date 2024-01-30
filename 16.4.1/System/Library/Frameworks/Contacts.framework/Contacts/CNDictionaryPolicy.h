@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary *_policyDictionary;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)contactRestrictionsForLabeledProperty:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;

@end
