@class VPNConnection, NSArray, NEConfigurationManager, NSUUID, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VPNConnectionStore : NSObject {
    BOOL _gradeCurrentConnectionHasBeenSet[7];
    VPNConnection *_gradeCurrentConnection[7];
    NSUUID *_gradeActiveVPNID[7];
    BOOL _gradeActiveVPNIDLoaded[7];
    NSMutableArray *_gradeVPNServiceIDs[7];
    NSMutableDictionary *_connectionDict[7];
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

- (void)dealloc;
- (id)queue;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)aggregateStatus;
- (void)_configurationChanged;
- (void)_connectionsChanged;
- (id)_defaultDictForType:(unsigned long long)a0;
- (id)activeVPNIDWithGrade:(unsigned long long)a0;
- (id)activeVPNIDsWithGrade:(unsigned long long)a0;
- (id)aggregateAlert;
- (unsigned long long)aggregateStatus:(unsigned long long)a0;
- (id)aggregateStatusText;
- (id)aggregateStatusText:(unsigned long long)a0;
- (BOOL)alwaysOnToggleEnabledForServiceID:(id)a0;
- (id)appNameForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)configurationIsManaged:(id)a0;
- (id)connectionWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)a0;
- (BOOL)createVPNWithOptions:(id)a0;
- (id)currentAppVPNConnections:(BOOL)a0;
- (id)currentConnection:(BOOL)a0 withGrade:(unsigned long long)a1;
- (id)currentConnectionWithGrade:(unsigned long long)a0;
- (id)currentConnectionsWithGrade:(unsigned long long)a0;
- (unsigned long long)currentOnlyConnectionGrade;
- (BOOL)deleteVPNWithServiceID:(id)a0;
- (BOOL)disableToggle;
- (BOOL)enable:(BOOL)a0 serviceID:(id)a1 withGrade:(unsigned long long)a2;
- (id)getProfileIDForServiceID:(id)a0;
- (BOOL)gradePresent:(unsigned long long)a0;
- (BOOL)isActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)isEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)isProfileBacked:(id)a0;
- (BOOL)isTypeEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1 outProviderAvailable:(BOOL *)a2;
- (BOOL)isUserCreatedVPN:(id)a0;
- (void)iterateContentFilterServicesWithBlock:(id /* block */)a0;
- (void)iterateDNSServicesWithBlock:(id /* block */)a0;
- (void)iterateDNSServicesWithBlock:(BOOL)a0 iterBlock:(id /* block */)a1;
- (id)optionsForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (id)organizationForService:(struct __SCNetworkService { } *)a0;
- (id)organizationForServiceID:(id)a0;
- (void)removeConnection:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)saveActiveVPNIDToPreferences:(id)a0 withGrade:(unsigned long long)a1;
- (void)setActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)setOptions:(id)a0 toConfiguration:(id)a1;
- (void)triggerLocalAuthenticationForConfigurationIdentifier:(id)a0 requestedByApp:(id)a1;
- (BOOL)updateVPNWithServiceID:(id)a0 withOptions:(id)a1;
- (id)vpnServiceCountWithGrade:(unsigned long long)a0;
- (id)vpnServiceTotalCount;
- (id)vpnServicesForCurrentSetWithGrade:(unsigned long long)a0;
- (id)vpnServicesForCurrentSetWithGrade:(unsigned long long)a0 excludePerApp:(BOOL)a1;

@end
