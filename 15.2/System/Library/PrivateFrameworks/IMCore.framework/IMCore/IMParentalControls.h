@class NSMutableDictionary;

@interface IMParentalControls : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_parentalControls;
@property (readonly, nonatomic) BOOL _disableAV;
@property (readonly, nonatomic) BOOL _forceChatLogging;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL disableAV;
@property (readonly, nonatomic) BOOL forceChatLogging;
@property (nonatomic) BOOL shouldPostNotifications;

+ (id)standardControls;
+ (id)objectForKey:(id)a0;

- (BOOL)disableService:(id)a0;
- (id)_serviceWithName:(id)a0;
- (void)_managedPrefsNotification:(id)a0;
- (void)_updateParentalSettings;
- (void).cxx_destruct;
- (BOOL)accountHasAllowlist:(id)a0;
- (id)init;
- (BOOL)accountIsEnabled:(id)a0;
- (BOOL)disableAccount:(id)a0;
- (id)allowlistForService:(id)a0;
- (BOOL)okToConnectAccount:(id)a0;
- (BOOL)forceAllowlistForService:(id)a0;
- (void)dealloc;
- (BOOL)forceAllowlistForAccount:(id)a0;
- (id)allowlistForAccount:(id)a0;

@end
