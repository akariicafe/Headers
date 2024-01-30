@interface CKDLongLivedClientProxy : CKDClientProxy

+ (id)longLivedProxyWithContext:(id)a0;
+ (id)sharedLongLivedProxies;
+ (id)_sharedLongLivedProxyForContext:(id)a0;
+ (void)clearCachedLongLivedProxies;

- (BOOL)_hasEnvironmentEntitlement;
- (BOOL)hasValidatedEntitlements;
- (id)apsEnvironmentEntitlement;
- (BOOL)isLongLived;
- (BOOL)hasDisplaysSystemAcceptPromptEntitlement;
- (BOOL)hasCloudKitSystemServiceEntitlement;
- (id)applicationID;
- (BOOL)hasLightweightPCSEntitlement;
- (BOOL)hasProtectionDataEntitlement;
- (id)_clientPrefixEntitlement;
- (id)CKPropertiesDescription;
- (BOOL)_hasCustomAccountsEntitlement;
- (BOOL)hasOutOfProcessUIEntitlement;
- (BOOL)hasAllowAccessDuringBuddyEntitlement;
- (BOOL)hasMasqueradingEntitlement;
- (id)associatedApplicationBundleID;
- (id)applicationBundleIdentifierForPush;
- (id)initWithClientContext:(id)a0;
- (BOOL)hasNonLegacyShareURLEntitlement;
- (id)serviceNameForContainerIdentifierMapEntitlement;
- (void)addOperationWithOperationInfo:(id)a0;
- (id)applicationBundleID;
- (void)_handleCompletionForOperation:(id)a0 initialMessageReplyBlock:(id /* block */)a1 customCompletionBlock:(id /* block */)a2;
- (id)description;
- (BOOL)hasAllowUnverifiedAccountEntitlement;
- (BOOL)hasDeviceIdentifierEntitlement;
- (BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (BOOL)hasZoneProtectionDataEntitlement;
- (BOOL)hasParticipantPIIEntitlement;
- (id)callbackProxyForOperationInfo:(id)a0 clientProvidedCallbackProxy:(id)a1;
- (BOOL)hasTCCAuthorization;

@end
