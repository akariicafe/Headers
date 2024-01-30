@class NSUUID, NSString, ASAuthorizationProviderExtensionAuthorizationRequest, SORealmSettingManager, SOKerberosExtensionData, NSData, SOKerberosExtensionUserData, SOSiteCode, NSObject, NSDate, SONetworkIdentity, SOKerberosRealmSettings;
@protocol OS_dispatch_group;

@interface SOKerberosContext : NSObject

@property (retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest;
@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) SORealmSettingManager *settingsManager;
@property (nonatomic) BOOL requestStarted;
@property (nonatomic) BOOL requestCancelled;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) SOKerberosExtensionData *extensionData;
@property (retain, nonatomic) SOKerberosExtensionUserData *extensionUserData;
@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSString *servicePrincipalName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *changedPassword;
@property (nonatomic) BOOL userNameIsReadOnly;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSData *certificateSerialNumber;
@property (retain, nonatomic) NSData *certificateIssuer;
@property (retain, nonatomic) NSString *certificateTokenID;
@property (retain, nonatomic) SOSiteCode *siteCode;
@property (retain, nonatomic) NSString *cacheName;
@property (nonatomic) BOOL returnCredentialOnly;
@property (readonly, nonatomic) SOKerberosRealmSettings *currentSettings;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSString *callerLocalizedName;
@property (nonatomic) BOOL credsCameFromKeychain;
@property (nonatomic) BOOL attemptedToGetCredsFromKeychain;
@property (nonatomic) BOOL forceLoginViewController;
@property (retain, nonatomic) NSDate *loginTimeStamp;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *siteCodeGroup;
@property (retain, nonatomic) SONetworkIdentity *networkIdentity;
@property (readonly, nonatomic) NSData *auditToken;
@property (readonly, nonatomic) BOOL isManagedApp;
@property (nonatomic) BOOL smartCardNeedsInsert;

- (void)cancelRequest:(BOOL)a0;
- (void).cxx_destruct;
- (void)startRequest;
- (void)cancelRequest;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)waitForCompletion;
- (void)completeRequestWithError:(id)a0;
- (void)completeRequest;
- (void)finishRequest;
- (void)completeRequestWithHTTPResponse:(id)a0 httpBody:(id)a1;
- (id)initWithRequest:(id)a0 extensionData:(id)a1 settingsManager:(id)a2;
- (void)setUserPrincipalNameAfterAuth:(id)a0;
- (void)completeRequestWithHeaders:(id)a0;
- (void)completeRequestWithHTTPResponseHeaders:(id)a0;
- (void)completeRequestWithDoNotHandle;

@end
