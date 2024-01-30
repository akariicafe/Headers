@class CNUserDefaults, NSNotificationCenter, CNEnvironmentBase, NSString, NSNumber;
@protocol CNTimeProvider, CNLocalizationServices, CNEntitlementVerification, CNSchedulerProvider, CNFileManager;

@interface CNEnvironment : CNEnvironmentBase {
    NSString *_defaultCountryCode;
    NSNumber *_isInternalBuildStorage;
    NSNumber *_isCommLimitsEnabledStorage;
    NSNumber *_isCommLimitsPersistenceAccessibleStorage;
}

@property (class, readonly) CNEnvironment *currentEnvironment;
@property (class, readonly) CNEnvironmentBase *defaultEnvironment;

@property (readonly) id<CNFileManager> fileManager;
@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<CNEntitlementVerification> entitlementVerifier;
@property (readonly) id<CNLocalizationServices> localizationServices;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) NSString *defaultCountryCode;
@property (readonly, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, getter=isCommLimitsEnabled) BOOL commLimitsEnabled;

+ (char *)environmentStackKey;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getDefaultCountryCode;
- (BOOL)isInternalBuildImpl;
- (BOOL)isCommLimitsEnabledImpl;
- (id)valueForKey:(id)a0 onCacheMiss:(id /* block */)a1;

@end
