@class VPNConnection, NSArray, NEConfigurationManager, NSUUID, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VPNConnectionStore : NSObject {
    BOOL _gradeCurrentConnectionHasBeenSet[5];
    VPNConnection *_gradeCurrentConnection[5];
    NSUUID *_gradeActiveVPNID[5];
    BOOL _gradeActiveVPNIDLoaded[5];
    NSMutableArray *_gradeVPNServiceIDs[5];
    NSMutableDictionary *_connectionDict[5];
}

@property (retain) NSArray *configurations;
@property (retain) NEConfigurationManager *configurationManager;
@property (retain) NSObject<OS_dispatch_queue> *storeQueue;
@property unsigned int vpnServiceCountDirty;
@property unsigned int vpnServiceCount;

+ (id)sharedInstance;
+ (struct __CFString { } *)vpnTypeFromConnectionType:(unsigned long long)a0;
+ (unsigned long long)connectionTypeFromVPNType:(struct __CFString { } *)a0;
+ (id)applicationNameForConfiguration:(id)a0 withGrade:(unsigned long long)a1;

- (id)vpnServiceTotalCount;
- (BOOL)alwaysOnToggleEnabledForServiceID:(id)a0;
- (id)currentConnectionsWithGrade:(unsigned long long)a0;
- (id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)vpnServiceCountWithGrade:(unsigned long long)a0;
- (BOOL)isTypeEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1 outProviderAvailable:(BOOL *)a2;
- (void)dealloc;
- (void)_configurationChanged;
- (id)appNameForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)disableToggle;
- (BOOL)createVPNWithOptions:(id)a0;
- (id)currentConnectionWithGrade:(unsigned long long)a0;
- (id)optionsForServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (id)vpnServicesForCurrentSetWithGrade:(unsigned long long)a0;
- (id)aggregateStatusText;
- (id)_defaultDictForType:(unsigned long long)a0;
- (BOOL)setOptions:(id)a0 toConfiguration:(id)a1;
- (BOOL)isProfileBacked:(id)a0;
- (id)connectionWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)updateVPNWithServiceID:(id)a0 withOptions:(id)a1;
- (BOOL)saveActiveVPNIDToPreferences:(id)a0 withGrade:(unsigned long long)a1;
- (id)getProfileIDForServiceID:(id)a0;
- (unsigned long long)currentOnlyConnectionGrade;
- (id)activeVPNIDWithGrade:(unsigned long long)a0;
- (void)removeConnection:(id)a0 withGrade:(unsigned long long)a1;
- (void)setActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (id)organizationForService:(struct __SCNetworkService { } *)a0;
- (id)queue;
- (BOOL)isActiveVPNID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)isUserCreatedVPN:(id)a0;
- (BOOL)deleteVPNWithServiceID:(id)a0;
- (id)activeVPNIDsWithGrade:(unsigned long long)a0;
- (id)currentAppVPNConnections:(BOOL)a0;
- (id)organizationForServiceID:(id)a0;
- (void)_connectionsChanged;
- (BOOL)enable:(BOOL)a0 serviceID:(id)a1 withGrade:(unsigned long long)a2;
- (id)aggregateAlert;
- (unsigned long long)aggregateStatus;
- (BOOL)isEnabledWithServiceID:(id)a0 withGrade:(unsigned long long)a1;
- (BOOL)gradePresent:(unsigned long long)a0;
- (void)triggerLocalAuthenticationForConfigurationIdentifier:(id)a0 requestedByApp:(id)a1;
- (id)currentConnection:(BOOL)a0 withGrade:(unsigned long long)a1;

@end
