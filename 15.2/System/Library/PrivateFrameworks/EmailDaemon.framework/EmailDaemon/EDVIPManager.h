@class NSString, NSURL, NSUbiquitousKeyValueStore, NSSet, NSMutableDictionary, CNContactStore, NSObject, EAEmailAddressSet;
@protocol OS_os_log, OS_dispatch_queue, EDAccountsProvider;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializeLock;
    BOOL _initialized;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *keyValueStore;
@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;

+ (id)_contactDescriptors;

- (id)_contactFromContacts:(id)a0 matchingMostAddresses:(id)a1;
- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (id)vipWithIdentifier:(id)a0;
- (void)_synchronizeKVStore;
- (void)_updateCloudWithLocal;
- (id)_serializedData;
- (void)_loadVIPs;
- (void)_accountsChanged:(id)a0;
- (void)_removeVIPsWithIdentifiers:(id)a0;
- (void)saveVIPs:(id)a0;
- (void)_saveVIPsLocally;
- (void)_mergeVIPs;
- (BOOL)isVIPAddress:(id)a0;
- (void)_saveVIPs;
- (id)allVIPWaitForResult;
- (void).cxx_destruct;
- (id)_vipsDictionary;
- (void)_initializeKVSStore;
- (id)_contactForName:(id)a0 emailAddresses:(id)a1;
- (void)_updateLocalWithCloud:(id)a0 refresh:(BOOL)a1;
- (id)initWithDirectoryURL:(id)a0 keyValueStore:(id)a1 accountsProvider:(id)a2 contactStore:(id)a3;
- (id)initWithDirectoryURL:(id)a0 accountsProvider:(id)a1;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (id)_validatedCloudVIPFromStore:(id)a0 withCloudKey:(id)a1;
- (void)_keyValueStoreChanged:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)dealloc;
- (BOOL)_isVIPForContact:(id)a0 orAddresses:(id)a1;
- (id)_allVIPEmailAddresses;
- (id)_cloudKeyForIdentifier:(id)a0;

@end
