@interface NSPPrivacyProxyPolicySerialization : NSObject

+ (id)createRemovalPoliciesForSystemComponents;
+ (id)createRemovalPoliciesForCaptivePlugins:(id)a0;
+ (id)createAccountIDBasedPolicies:(id)a0 accountIdentifier:(id)a1 platformBinary:(BOOL)a2 uidRequired:(BOOL)a3;
+ (id)createHTTPPolicies:(id)a0 skipUnencrypted:(BOOL)a1 machOUUIDs:(id)a2;
+ (id)safariBundleMachOUUIDsToInstall:(id)a0;
+ (id)createPolicyWithOrder:(unsigned int)a0 policyResult:(id)a1 machOUUID:(id)a2 remotePort:(unsigned short)a3 protocol:(unsigned short)a4 otherPolicyConditions:(id)a5 uidRequired:(BOOL)a6;
+ (id)createDNSPolicies:(id)a0 ingressProxyURL:(id)a1;
+ (id)policiesForSafariTechnologyPreview:(id)a0;
+ (id)policiesForSafariAppBundles:(id)a0 safariBundleMachOUUIDs:(id)a1;
+ (id)protoBufWithPropertyList:(id)a0;
+ (id)createTrackerPolicies:(id)a0 webContent:(BOOL)a1 machOUUIDs:(id)a2;
+ (id)createUnencryptedPolicies:(id)a0 machOUUIDs:(id)a1;
+ (id)propertyListWithProtoBuf:(id)a0;
+ (id)policyExceptionsForWiFi:(BOOL)a0 cellular:(BOOL)a1 interfaceNames:(id)a2;
+ (id)createPoliciesFromPolicyMask:(int)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 captivePluginBundleIDs:(id)a3;
+ (void)addDNSPolicyWithOrder:(unsigned int)a0 toArray:(id)a1 machOUUID:(id)a2;
+ (id)createAllPolicies:(id)a0 machOUUIDs:(id)a1 exceptionAccount:(id)a2;
+ (id)machoUUIDFromSigningID:(id)a0;
+ (id)probePolicies;
+ (id)policiesForMailApp:(id)a0;
+ (int)policyMaskFromProxyPolicy:(id)a0;
+ (id)policiesWithProtoBuf:(id)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 captivePluginBundleIDs:(id)a3;

@end
