@class AMSMappedBundleInfo, NSString, NSData, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *defaultMediaTypeAccessQueue;
@property (class, readonly, nonatomic) BOOL hasAMSEntitlement;
@property (class, readonly, nonatomic) AMSProcessInfo *currentProcess;
@property (class, readonly, nonatomic, getter=isBuddyRunning) BOOL buddyRunning;
@property (class, retain, nonatomic) NSString *defaultMediaTypeForCurrentProcess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAccountsDaemon) BOOL accountsDaemon;
@property (readonly, nonatomic) AMSMappedBundleInfo *mappedBundleInfo;
@property (retain, nonatomic) NSString *accountMediaType;
@property (retain, nonatomic) NSData *auditTokenData;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *executableName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *partnerHeader;
@property (retain, nonatomic) NSString *proxyAppBundleID;
@property (copy, nonatomic) NSString *treatmentNamespace;
@property (retain, nonatomic) NSString *userAgentSuffix;

+ (id)_bundleForIdentifier:(id)a0 record:(id)a1;
+ (id)valueForEntitlement:(id)a0;
+ (BOOL)boolForEntitlement:(id)a0;
+ (id)stringForEntitlement:(id)a0;
+ (void)_accessProcessInfoCache:(id /* block */)a0;
+ (id)_cachedProcessInfoForIdentifier:(id)a0;
+ (id)_bundleRecordForIdentifier:(id)a0;
+ (void)copyPropertiesFrom:(id)a0 to:(id)a1;
+ (id)_currentProcessBundleIdentifier;
+ (BOOL)boolForMachLookupAccess:(id)a0;
+ (void)_cacheProcessInfo:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)generateConfigurationFromBag:(id)a0;
- (id)description;
- (id)generateConfigurationFromBagContract:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generateConfiguration;

@end
