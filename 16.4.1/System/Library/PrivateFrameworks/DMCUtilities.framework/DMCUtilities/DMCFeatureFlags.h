@interface DMCFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isBYODEnabled) BOOL BYODEnabled;
@property (class, readonly, nonatomic, getter=isBYOD3rdPartyEnabled) BOOL BYOD3rdPartyEnabled;
@property (class, readonly, nonatomic, getter=isBYODAppleEnabled) BOOL BYODAppleEnabled;
@property (class, readonly, nonatomic, getter=isBYODSpyglassEnabled) BOOL BYODSpyglassEnabled;
@property (class, readonly, nonatomic, getter=isClassCIdentitiesEnabled) BOOL ClassCIdentitiesEnabled;
@property (class, readonly, nonatomic, getter=isDeviceManagementAndVPNUIEnabled) BOOL DeviceManagementAndVPNUIEnabled;
@property (class, readonly, nonatomic, getter=isESSOEnabled) BOOL ESSOEnabled;
@property (class, readonly, nonatomic, getter=isESSOTestEnabled) BOOL ESSOTestEnabled;
@property (class, readonly, nonatomic, getter=isHRNEnabled) BOOL HRNEnabled;
@property (class, readonly, nonatomic, getter=isManagedRestoreEnabled) BOOL ManagedRestoreEnabled;
@property (class, readonly, nonatomic, getter=isORGOEnabled) BOOL ORGOEnabled;
@property (class, readonly, nonatomic, getter=isORGODeviceSubscriptionEnabled) BOOL ORGODeviceSubscriptionEnabled;
@property (class, readonly, nonatomic, getter=isORGOUserSubscriptionEnabled) BOOL ORGOUserSubscriptionEnabled;
@property (class, readonly, nonatomic, getter=isRMDMEnabled) BOOL RMDMEnabled;
@property (class, readonly, nonatomic, getter=isSecondaryAccountListUIEnabled) BOOL SecondaryAccountListUIEnabled;
@property (class, readonly, nonatomic, getter=isUAORGOEnabled) BOOL UAORGOEnabled;
@property (class, readonly, nonatomic, getter=isUserEnrollmentShowsManagedAccountEnabled) BOOL UserEnrollmentShowsManagedAccountEnabled;
@property (class, readonly, nonatomic, getter=isUserChannelEnabled) BOOL UserChannelEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (class, readonly, nonatomic, getter=hasT2) BOOL hasT2;

@end
