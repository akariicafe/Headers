@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)cachedCount;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)a0;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;

@end
