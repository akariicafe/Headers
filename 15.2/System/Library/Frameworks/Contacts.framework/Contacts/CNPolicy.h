@interface CNPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;

- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (BOOL)shouldRemoveContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)shouldSetValue:(id)a0 property:(id)a1 contact:(id)a2 replacementValue:(id *)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (id)unsupportedAttributesForLableledContactProperty:(id)a0;
- (id)_replacementLabeledValue:(id)a0 omittingKeys:(id)a1;
- (BOOL)_validateLabeledValueArrayLabels:(id)a0 forContactProperty:(id)a1 replacementValue:(id *)a2;
- (BOOL)_validateLabeledValueArrayAttributeSupport:(id)a0 forContactProperty:(id)a1 replacementValue:(id *)a2;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
