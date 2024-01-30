@class CNContactsEnvironment, CNManagedConfiguration, CNContactFetchRequest;

@interface CNiOSContactFetcher : NSObject {
    void *_addressBook;
    CNContactFetchRequest *_fetchRequest;
    id /* block */ _personToContact;
    CNContactsEnvironment *_environment;
    CNManagedConfiguration *_managedConfiguration;
}

+ (id)contactsForFetchRequest:(id)a0 matchInfos:(id *)a1 inAddressBook:(void *)a2 environment:(id)a3 managedConfiguration:(id)a4 error:(id *)a5;

- (id)executeFetchRequestWithProgressiveResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithFetchRequest:(id)a0 addressBook:(void *)a1 environment:(id)a2 managedConfiguration:(id)a3;
- (id)fetchContactsReturningMatchInfos:(id *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
