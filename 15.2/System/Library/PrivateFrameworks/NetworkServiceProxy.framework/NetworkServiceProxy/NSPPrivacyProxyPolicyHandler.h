@class NSMutableSet, NSString, NEPolicySession, NSPPrivacyProxyPolicy, NSArray, NSMutableArray, NEFlowDivertFileHandle;

@interface NSPPrivacyProxyPolicyHandler : NSObject

@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;
@property (retain, nonatomic) NEPolicySession *session;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertHandle;
@property (retain, nonatomic) NSString *ingressProxyURL;
@property (retain, nonatomic) NSArray *captivePluginBundleIDs;
@property (retain, nonatomic) NSMutableArray *mainPolicyIDs;
@property (retain, nonatomic) NSMutableSet *disabledInterfaces;
@property (nonatomic) BOOL wifiDisabled;
@property (nonatomic) BOOL cellularDisabled;
@property (retain, nonatomic) NSMutableArray *interfacePolicyIDs;
@property (retain, nonatomic) NSMutableArray *safariTechnologyPreviewPolicyIDs;
@property (retain, nonatomic) NSMutableArray *safariBundlePolicyIDs;
@property (retain, nonatomic) NSMutableArray *mailAppPolicyIDs;
@property (retain, nonatomic) NSMutableArray *probePolicyIDs;

+ (id)sharedHandler;

- (BOOL)addPoliciesForMailApp;
- (BOOL)addPoliciesForProbing;
- (id)currentPolicy;
- (void)wifiDisabled:(BOOL)a0;
- (id)machOUUIDsForBundleIdentifiers:(id)a0;
- (void)replaceDisabledInterfaces:(id)a0;
- (void)remove;
- (BOOL)addPoliciesForSafariAppBundle;
- (void)removePoliciesForSafariAppBundle;
- (BOOL)isAppInstalled:(id)a0;
- (void)handleAppInstallation:(id)a0;
- (BOOL)addPoliciesForSafariTechPreviewApp;
- (id)createPolicySession;
- (BOOL)set:(id)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 captivePluginBundleIDs:(id)a3;
- (void)destroyPolicySession;
- (void).cxx_destruct;
- (void)handleAppUninstallation:(id)a0;
- (void)cellularDisabled:(BOOL)a0;
- (id)init;
- (void)removeMainPolicies;
- (void)invalidate;
- (BOOL)addPolicies;
- (BOOL)removePoliciesForMailApp;
- (void)removePoliciesForSafariTechPreviewApp;
- (void)removePoliciesForProbing;
- (void)interface:(id)a0 disabled:(BOOL)a1;
- (void)resetExceptionInterfacePolicy;

@end
