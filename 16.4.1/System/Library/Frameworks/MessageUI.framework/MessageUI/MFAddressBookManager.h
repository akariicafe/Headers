@class NSHashTable;

@interface MFAddressBookManager : NSObject {
    void *_addressBook;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_clients;
}

+ (id)sharedManager;
+ (BOOL)isAuthorizedToUseAddressBook;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void *)addressBook;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_clientsArray;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;

@end
