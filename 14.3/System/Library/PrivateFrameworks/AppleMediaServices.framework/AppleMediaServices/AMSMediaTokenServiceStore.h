@class AMSMediaTokenServiceKeychainStore, AMSMediaToken, NSString, AMSMediaTokenServiceUserDefaultsStore;

@interface AMSMediaTokenServiceStore : NSObject

@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (retain, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (retain, nonatomic) AMSMediaTokenServiceUserDefaultsStore *userDefaultsStore;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (void)_mediaTokenChanged;
- (void).cxx_destruct;
- (id)_keychainAccessGroup;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (BOOL)_hasAppleGroupEnabled;
- (void)_teardownKeychainNotifications;
- (void)storeToken:(id)a0;
- (id)_mediaTokenChangedNotificationName;
- (void)_setupKeychainNotifications;
- (void)_postMediaTokenChangedNotification;

@end
