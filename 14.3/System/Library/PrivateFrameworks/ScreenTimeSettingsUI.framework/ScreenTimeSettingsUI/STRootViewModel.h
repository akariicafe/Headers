@class NSArray, NSSet, NSDictionary, STUIUser;

@interface STRootViewModel : NSObject

@property (nonatomic) BOOL canStopScreenTimeWithoutPasscode;
@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) BOOL isCloudSyncEnabled;
@property (readonly, nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled;
@property (readonly, nonatomic) BOOL canStartScreenTime;
@property (readonly, nonatomic) BOOL canStopScreenTime;
@property (readonly, nonatomic) BOOL canStopSharingScreenTime;
@property (readonly, nonatomic) BOOL isSharingUsageData;
@property (readonly, nonatomic, getter=isWebUsageEnabled) BOOL webUsageEnabled;
@property (readonly, nonatomic) BOOL isRemotelyManagedUserWithPasscode;
@property (readonly, nonatomic) BOOL canSignIn;
@property (readonly, nonatomic) BOOL canToggleCloudSyncData;
@property (readonly, nonatomic) BOOL canSetUpFamily;
@property (readonly, nonatomic) BOOL canViewAskForTimeRequests;
@property (readonly, nonatomic) BOOL forceParentalControls;
@property (readonly, nonatomic) BOOL canToggleWebsiteData;
@property (readonly, nonatomic) BOOL shouldShowCompatibilityAlerts;
@property (readonly) BOOL hasWatchOSDevices;
@property (readonly) BOOL hasWatchOSDevicesOnly;
@property (copy, nonatomic) NSSet *installedBundleIDs;
@property (copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier;
@property (copy, nonatomic) STUIUser *me;
@property (copy, nonatomic) NSArray *children;

+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+ (id)keyPathsForValuesAffectingWebUsageEnabled;
+ (id)keyPathsForValuesAffectingHasWatchOSDevicesOnly;
+ (id)keyPathsForValuesAffectingCanStartScreenTime;
+ (id)keyPathsForValuesAffectingIsSharingUsageData;
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+ (id)keyPathsForValuesAffectingHasWatchOSDevices;
+ (id)keyPathsForValuesAffectingForceParentalControls;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanSignIn;
+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;

- (id)init;
- (void).cxx_destruct;

@end
