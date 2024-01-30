@interface CNiOSABUtilities : NSObject {
    void *_addressBook;
}

- (id)allAccountIdentifiers;
- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (id)filterPeople:(id)a0 matchingAccountIdentifiers:(id)a1;

@end
