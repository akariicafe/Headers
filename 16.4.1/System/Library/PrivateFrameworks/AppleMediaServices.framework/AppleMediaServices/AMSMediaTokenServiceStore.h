@class AMSMediaTokenServiceKeychainStore, NSString, AMSMediaToken;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

+ (BOOL)_hasAppleGroupEnabled;

- (id)initWithClientIdentifier:(id)a0 keychainStore:(id)a1;
- (void)deleteToken;
- (void)_mediaTokenChanged:(id)a0;
- (void)_setupKeychainNotifications;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)_mediaTokenFromUserDefaults;
- (void)storeToken:(id)a0;
- (void)dealloc;
- (id)retrieveToken;
- (id)_keychainAccessGroup;
- (void)_teardownKeychainNotifications;
- (id)_mediaTokenChangedNotificationName;
- (void).cxx_destruct;

@end
