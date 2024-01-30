@class VPNConnection, NSArray, NEConfigurationManager, NSUUID, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VPNConnectionStore : NSObject {
    BOOL _gradeCurrentConnectionHasBeenSet[6];
    VPNConnection *_gradeCurrentConnection[6];
    NSUUID *_gradeActiveVPNID[6];
    BOOL _gradeActiveVPNIDLoaded[6];
    NSMutableArray *_gradeVPNServiceIDs[6];
    NSMutableDictionary *_connectionDict[6];
}

@property (retain) NSArray *configurations;
@property (retain) NEConfigurationManager *configurationManager;
@property (retain) NSObject<OS_dispatch_queue> *storeQueue;
@property unsigned int vpnServiceCountDirty;
@property unsigned int vpnServiceCount;

+ (id)sharedInstance;
+ (id)applicationNameForConfiguration:(id)a0 withGrade:(unsigned long long)a1;
+ (unsigned long long)connectionTypeFromVPNType:(struct __CFString { } *)a0;
+ (struct __CFString { } *)vpnTypeFromConnectionType:(unsigned long long)a0;

- (id)appNameForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (id)organizationForServiceID:(id)a0;
- (id)currentConnectionsWithGrade:(unsigned long long)a0;
- (BOOL)saveActiveVPNIDToPreferences:(id)a0 withGrade:(unsigned long long)a1;
- (void)_configurationChanged;
- (unsigned long long)aggregateStatus;
- (BOOL)gradePresent:(unsigned long long)a0;
- (void)removeConnection:(id)a0 withGrade:(unsigned long long)a1;
- (id)currentAppVPNConnections:(BOOL)a0;
- (BOOL)disableToggle;
- (id)organizationForService:(struct __SCNetworkService { } *)a0;
- (id)optionsForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)isProfileBacked:(id)a0;
- (id)getProfileIDForServiceID:(id)a0;
- (id)connectionWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (id)vpnServicesForCurrentSetWithGrade:(unsigned long long)a0;
- (BOOL)isTypeEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1 outProviderAvailable:(BOOL *)a2;
- (id)aggregateAlert;
- (id)activeVPNIDsWithGrade:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)vpnServiceCountWithGrade:(unsigned long long)a0;
- (id)init;
- (void)iterateDNSServicesWithBlock:(id /* block */)a0;
- (id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)a0;
- (BOOL)configurationIsManaged:(id)a0;
- (unsigned long long)currentOnlyConnectionGrade;
- (BOOL)updateVPNWithServiceID:(id)a0 withOptions:(id)a1;
- (BOOL)isUserCreatedVPN:(id)a0;
- (BOOL)setOptions:(id)a0 toConfiguration:(id)a1;
- (BOOL)isEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)isActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (id)currentConnectionWithGrade:(unsigned long long)a0;
- (BOOL)createVPNWithOptions:(id)a0;
- (void)dealloc;
- (id)currentConnection:(BOOL)a0 withGrade:(unsigned long long)a1;
- (BOOL)deleteVPNWithServiceID:(id)a0;
- (id)_defaultDictForType:(unsigned long long)a0;
- (BOOL)alwaysOnToggleEnabledForServiceID:(id)a0;
- (id)vpnServiceTotalCount;
- (id)queue;
- (void)_connectionsChanged;
- (BOOL)enable:(BOOL)a0 serviceID:(id)a1 withGrade:(unsigned long long)a2;
- (void)triggerLocalAuthenticationForConfigurationIdentifier:(id)a0 requestedByApp:(id)a1;
- (void)setActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (id)aggregateStatusText;
- (id)activeVPNIDWithGrade:(unsigned long long)a0;

@end
