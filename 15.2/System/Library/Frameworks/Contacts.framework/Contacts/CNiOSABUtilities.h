@interface CNiOSABUtilities : NSObject {
    void *_addressBook;
}

- (id)filterPeople:(id)a0 matchingAccountIdentifiers:(id)a1;
- (id)allAccountIdentifiers;
- (id)initWithAddressBook:(void *)a0;
- (void)dealloc;

@end
