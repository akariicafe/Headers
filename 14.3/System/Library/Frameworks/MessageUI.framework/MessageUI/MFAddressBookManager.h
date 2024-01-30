@class NSHashTable;

@interface MFAddressBookManager : NSObject {
    void *_addressBook;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_clients;
}

+ (BOOL)isAuthorizedToUseAddressBook;
+ (id)sharedManager;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void *)addressBook;
- (void)dealloc;
- (id)_clientsArray;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;

@end
