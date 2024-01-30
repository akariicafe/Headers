@class NSNotificationCenter, NSString, CNUserDefaults;
@protocol CNFileManager, CNAuthorizationContext, CNEntitlementVerification, CNLocalizationServices, CNSchedulerProvider, CNProbabilityUtility, CNTimeProvider, _TtP18ContactsFoundation24CNKeychainFacadeProtocol_;

@interface CNEnvironmentTestDouble : CNEnvironment

@property (nonatomic, retain) id<_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> keychainFacade;
@property (retain) id<CNFileManager> fileManager;
@property (retain) CNUserDefaults *userDefaults;
@property (retain) id<CNSchedulerProvider> schedulerProvider;
@property (retain) id<CNTimeProvider> timeProvider;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) id<CNEntitlementVerification> entitlementVerifier;
@property (retain) id<CNAuthorizationContext> authorizationContext;
@property (retain) id<CNLocalizationServices> localizationServices;
@property (retain) id<CNProbabilityUtility> probabilityUtility;
@property (copy) NSString *mainBundleIdentifier;
@property (copy) NSString *defaultCountryCode;
@property (getter=isInternalBuild) BOOL internalBuild;
@property (getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (getter=isKeychainEnabled) BOOL keychainEnabled;

- (void)setUserDefaults:(id)a0;
- (void)setSchedulerProvider:(id)a0;
- (void)setFileManager:(id)a0;
- (void)setNotificationCenter:(id)a0;
- (void)setInternalBuild:(BOOL)a0;
- (id)init;
- (void)setAuthorizationContext:(id)a0;
- (void)setMainBundleIdentifier:(id)a0;
- (void)setCommLimitsEnabled:(BOOL)a0;
- (void)setDefaultCountryCode:(id)a0;
- (void)setEntitlementVerifier:(id)a0;
- (void)setKeychainEnabled:(BOOL)a0;
- (void)setLocalizationServices:(id)a0;
- (void)setProbabilityUtility:(id)a0;
- (void)setTimeProvider:(id)a0;

@end
