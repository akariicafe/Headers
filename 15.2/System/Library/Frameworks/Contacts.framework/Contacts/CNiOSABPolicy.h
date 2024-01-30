@interface CNiOSABPolicy : CNPolicy <NSSecureCoding> {
    void *_iOSABPolicy;
    void *_fakePerson;
    BOOL _abSourceIsContentReadonly;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (BOOL)isEqualToPolicy:(id)a0;
- (id)initWithAddressBookPolicy:(void *)a0 readOnly:(BOOL)a1;
- (BOOL)shouldRemoveContact:(id)a0;
- (id)_orderedLabels:(id)a0 withOrder:(id)a1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)shouldSetValue:(id)a0 property:(id)a1 contact:(id)a2 replacementValue:(id *)a3;
- (BOOL)isReadonly;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
