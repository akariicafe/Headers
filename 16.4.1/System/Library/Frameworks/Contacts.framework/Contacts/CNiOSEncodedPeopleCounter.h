@class CNManagedConfiguration, CNiOSAddressBook, CNContactsEnvironment, CNContactFetchRequest;
@protocol CNiOSContactPredicate, CNContactsLogger;

@interface CNiOSEncodedPeopleCounter : NSObject {
    CNiOSAddressBook *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    id<CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    id<CNiOSContactPredicate> _privatePredicate;
}

- (void).cxx_destruct;
- (id)fetchContactCountWithError:(id *)a0;
- (id)initWithFetchRequest:(id)a0 addressBook:(id)a1 managedConfiguration:(id)a2;
- (BOOL)supportsCounting;

@end
