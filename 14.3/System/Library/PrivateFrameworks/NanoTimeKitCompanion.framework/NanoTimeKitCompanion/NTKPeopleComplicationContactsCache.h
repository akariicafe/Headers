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

- (void)_setupNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)favoriteContacts;
- (void)_tearDownNotifications;
- (id)contactForId:(id)a0;
- (void)setupNotificationsIfNecessary;
- (id)_favoritesMappingLocked;
- (id)_mappedFavoriteContacts;
- (id)computeNonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (id)fullNameForContact:(id)a0;
- (id)abbreviatedNameForContact:(id)a0;
- (id)shortNameForContact:(id)a0;
- (id)_fetchContactForId:(id)a0;
- (void)_queue_findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (id)_contactKeysToFetchWithoutThumbnail;
- (id)_contactKeysToFetchWithThumbnail;
- (BOOL)checkValidityOfContact:(id)a0 block:(id /* block */)a1;
- (void)_queue_loadFavoriteContacts;
- (void)_queue_loadAllContacts;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_queue_reloadContacts;
- (id)firstNonFavoriteAllContact;
- (id)nonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (void)findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (BOOL)contactIdentifierIsFavorited:(id)a0;
- (void)_didReceiveDeviceLockStateDidChangeNotification;

@end
