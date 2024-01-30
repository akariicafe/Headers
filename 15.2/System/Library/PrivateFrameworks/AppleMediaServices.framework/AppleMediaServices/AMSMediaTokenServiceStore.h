@class AMSMediaTokenServiceKeychainStore, AMSMediaToken, NSString, NSObject, AMSMediaTokenServiceUserDefaultsStore;
@protocol OS_dispatch_queue;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (retain, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (retain, nonatomic) AMSMediaTokenServiceUserDefaultsStore *userDefaultsStore;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (void)_mediaTokenChanged;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)_mediaTokenChangedNotificationName;
- (void)storeToken:(id)a0;
- (void)_teardownKeychainNotifications;
- (id)_keychainAccessGroup;
- (id)retrieveToken;
- (void).cxx_destruct;
- (void)_setupKeychainNotifications;
- (void)_postMediaTokenChangedNotification;
- (BOOL)_hasAppleGroupEnabled;
- (void)dealloc;

@end
