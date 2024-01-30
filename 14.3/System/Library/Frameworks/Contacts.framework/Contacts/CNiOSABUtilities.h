@interface CNiOSABUtilities : NSObject {
    void *_addressBook;
}

- (void)dealloc;
- (id)allAccountIdentifiers;
- (id)filterPeople:(id)a0 matchingAccountIdentifiers:(id)a1;
- (id)initWithAddressBook:(void *)a0;

@end
