@class CNContactStore, NSArray, NSDictionary, CNFavorites, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationContactsCache : NSObject {
    NSDictionary *_favoritesMapping;
    NSLock *_favoritesMappingLock;
    NSLock *_favoritesEntriesLock;
    NSLock *_allContactsEntriesLock;
    BOOL _hasSetupNotifications;
    NSLock *_hasSetupNotificationsLock;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSArray *_nonFavoriteValidAllContacts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCache;

- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)fullNameForContact:(id)a0;
- (id)favoriteContacts;
- (id)contactForId:(id)a0;
- (void)_locked_createFavorites;
- (void)setupNotificationsIfNecessary;
- (id)_favoritesMappingLocked;
- (id)_mappedFavoriteContacts;
- (id)computeNonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (id)abbreviatedNameForContact:(id)a0;
- (id)shortNameForContact:(id)a0;
- (id)_fetchContactForId:(id)a0;
- (void)_queue_findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (id)_contactKeysToFetchWithoutThumbnail;
- (id)_contactKeysToFetchWithThumbnail;
- (BOOL)checkValidityOfContact:(id)a0 block:(id /* block */)a1;
- (void)_queued_loadFavoriteContacts;
- (void)_queued_loadAllContacts;
- (void)_queued_flushCNFavorites;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_favoritesEntriesChangedExternally;
- (void)_queue_reloadContacts;
- (void)_queue_flushCNFavoritesReload;
- (id)firstNonFavoriteAllContact;
- (id)nonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (void)findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (BOOL)contactIdentifierIsFavorited:(id)a0;
- (void)_didReceiveDeviceLockStateDidChangeNotification;

@end
