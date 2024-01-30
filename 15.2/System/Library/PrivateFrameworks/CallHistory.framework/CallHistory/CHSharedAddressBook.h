@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (unsigned long long)cachedCount;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)a0;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;

@end
