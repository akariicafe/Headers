@class NSString;

@interface CKDApplicationMetadata : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (nonatomic) long long contextType;
@property (nonatomic) BOOL isCKSystemService;
@property (nonatomic) BOOL canMasquerade;
@property (nonatomic) BOOL canSetEnvironment;
@property (nonatomic) BOOL allowCustomAccounts;
@property (nonatomic) BOOL canAccessProtectionData;
@property (nonatomic) BOOL canAccessZoneProtectionData;
@property (nonatomic) BOOL canSetDeviceIdentifier;
@property (nonatomic) BOOL hasAccessDuringBuddy;
@property (nonatomic) BOOL hasLightweightPCS;
@property (nonatomic) BOOL hasTCCAuthorization;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic) BOOL isOOPUI;
@property (nonatomic) BOOL allowsParticipantPII;
@property (nonatomic) BOOL displaysSystemAcceptPrompt;
@property (retain, nonatomic) NSString *entitlementSpecifiedPCSServiceName;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *clientPrefix;
@property (retain, nonatomic) NSString *pushBundleID;
@property (retain, nonatomic) NSString *associatedApplicationBundleID;
@property (retain, nonatomic) NSString *applicationContainerPath;
@property (nonatomic) BOOL canUseNonLegacyShareURL;
@property (nonatomic) BOOL allowUnverifiedAccount;

- (id)init;
- (void).cxx_destruct;

@end
