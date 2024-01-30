@class NSString, NSDictionary, NSArray, NSError;

@interface CKEntitlements : NSObject <CKSQLiteItem> {
    int _pid;
    NSString *_cachedApplicationBundleID;
    NSDictionary *_entitlementsDict;
    NSError *_secEntitlementsError;
    NSString *_procName;
}

@property (readonly, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) NSString *associatedApplicationBundleID;
@property (readonly, nonatomic) NSString *apsEnvironmentEntitlement;
@property (readonly, nonatomic) BOOL hasSPIEntitlement;
@property (readonly, nonatomic) BOOL hasMasqueradingEntitlement;
@property (readonly, nonatomic) BOOL hasProtectionDataEntitlement;
@property (readonly, nonatomic) BOOL hasZoneProtectionDataEntitlement;
@property (readonly, nonatomic) BOOL hasDeviceIdentifierEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSystemServiceEntitlement;
@property (readonly, nonatomic) BOOL hasSystemLaunchDaemonEntitlement;
@property (readonly, nonatomic) BOOL hasDarkWakeNetworkReachabilityEnabledEntitlement;
@property (readonly, nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;
@property (readonly, nonatomic) BOOL hasLightweightPCSEntitlement;
@property (readonly, nonatomic) BOOL hasOutOfProcessUIEntitlement;
@property (readonly, nonatomic) BOOL hasParticipantPIIEntitlement;
@property (readonly, nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement;
@property (readonly, nonatomic) NSDictionary *serviceNameForContainerIdentifierMapEntitlement;
@property (readonly, nonatomic) BOOL hasNonLegacyShareURLEntitlement;
@property (readonly, nonatomic) BOOL hasAllowUnverifiedAccountEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSupportServiceEntitlement;
@property (readonly, nonatomic) BOOL hasExplicitCodeOperationURLEntitlement;
@property (readonly, nonatomic) NSString *codeServiceURLEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByServiceEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByContainerAndServiceEntitlement;
@property (readonly, nonatomic) BOOL hasVFSOpenByIDEntitlement;
@property (readonly, nonatomic) BOOL hasAllowPackagesEntitlement;
@property (readonly, nonatomic) BOOL hasEnvironmentEntitlement;
@property (readonly, nonatomic) BOOL hasCustomAccountsEntitlement;
@property (readonly, nonatomic) NSString *clientPrefixEntitlement;
@property (readonly, nonatomic) BOOL hasAllowFakeEntitlementsEntitlement;
@property (readonly, nonatomic) long long containerEnvironment;
@property (readonly, nonatomic) NSArray *developmentContainerEnvironmentOverrides;
@property (readonly, nonatomic) NSArray *cloudServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)initWithSecTask:(struct __SecTask { } *)a0 pid:(int)a1;
- (id)initWithEntitlementsDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)entitlementsByAddingOverlay:(id)a0;
- (BOOL)validateEntitlementsWithSDKVersion:(unsigned int)a0 error:(id *)a1;

@end
