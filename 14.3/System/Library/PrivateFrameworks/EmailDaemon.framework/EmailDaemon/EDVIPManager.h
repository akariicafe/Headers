@class NSString, NSURL, NSUbiquitousKeyValueStore, NSSet, NSMutableDictionary, CNContactStore, NSObject, EAEmailAddressSet;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *keyValueStore;
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

- (BOOL)isVIPAddress:(id)a0;
- (id)_contactFromContacts:(id)a0 matchingMostAddresses:(id)a1;
- (id)_allVIPEmailAddresses;
- (void)_saveVIPs;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (void).cxx_destruct;
- (void)_removeVIPsWithIdentifiers:(id)a0;
- (void)_keyValueStoreChanged:(id)a0;
- (id)vipWithIdentifier:(id)a0;
- (BOOL)_isVIPForContact:(id)a0 orAddresses:(id)a1;
- (void)dealloc;
- (void)_updateCloudWithLocal;
- (id)_serializedData;
- (id)_vipsDictionary;
- (id)_cloudKeyForIdentifier:(id)a0;
- (id)allVIPWaitForResult;
- (id)initWithDirectoryURL:(id)a0;
- (void)_saveVIPsLocally;
- (void)_loadVIPs;
- (void)saveVIPs:(id)a0;
- (void)_updateLocalWithCloud:(id)a0 refresh:(BOOL)a1;
- (id)_validatedCloudVIPFromStore:(id)a0 withCloudKey:(id)a1;
- (id)initWithDirectoryURL:(id)a0 keyValueStore:(id)a1 contactStore:(id)a2;
- (void)_synchronizeKVStore;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (id)_contactForName:(id)a0 emailAddresses:(id)a1;
- (void)_mergeVIPs;

@end
