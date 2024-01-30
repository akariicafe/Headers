@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (unsigned long long)cachedCount;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void)dealloc;
- (void)revertAddressBook:(id)a0;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (id)init;
- (id)description;
- (void)cleanUpAddressBookCache_sync;
- (void)registerForContactsNotifications;
- (void).cxx_destruct;

@end
