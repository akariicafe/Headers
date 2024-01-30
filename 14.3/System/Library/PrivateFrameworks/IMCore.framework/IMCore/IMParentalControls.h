@class NSMutableDictionary;

@interface IMParentalControls : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_parentalControls;
@property (readonly, nonatomic) BOOL _disableAV;
@property (readonly, nonatomic) BOOL _forceChatLogging;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL disableAV;
@property (readonly, nonatomic) BOOL forceChatLogging;
@property (nonatomic) BOOL shouldPostNotifications;

+ (id)objectForKey:(id)a0;
+ (id)standardControls;

- (BOOL)disableAccount:(id)a0;
- (BOOL)accountHasWhitelist:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)whitelistForAccount:(id)a0;
- (void)dealloc;
- (BOOL)forceWhitelistForService:(id)a0;
- (BOOL)accountIsEnabled:(id)a0;
- (void)_updateParentalSettings;
- (BOOL)okToConnectAccount:(id)a0;
- (BOOL)forceWhitelistForAccount:(id)a0;
- (void)_managedPrefsNotification:(id)a0;
- (BOOL)disableService:(id)a0;
- (id)_serviceWithName:(id)a0;
- (id)whitelistForService:(id)a0;

@end
