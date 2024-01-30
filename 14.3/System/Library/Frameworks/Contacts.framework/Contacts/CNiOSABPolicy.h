@interface CNiOSABPolicy : CNPolicy {
    void *_iOSABPolicy;
    void *_fakePerson;
    BOOL _abSourceIsContentReadonly;
}

- (BOOL)shouldSetValue:(id)a0 property:(id)a1 contact:(id)a2 replacementValue:(id *)a3;
- (id)initWithAddressBookPolicy:(void *)a0 readOnly:(BOOL)a1;
- (id)_orderedLabels:(id)a0 withOrder:(id)a1;
- (BOOL)shouldRemoveContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (void)dealloc;
- (BOOL)isReadonly;
- (id)supportedLabelsForContactProperty:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;

@end
