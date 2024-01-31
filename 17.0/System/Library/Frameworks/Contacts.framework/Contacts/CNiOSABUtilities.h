@interface CNiOSABUtilities : NSObject {
    void *_addressBook;
}

- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (id)allAccountIdentifiers;
- (id)filterPeople:(id)a0 matchingAccountIdentifiers:(id)a1;

@end
