@class NSNumber, NSString, NSMutableDictionary;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *staticUsage;
@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;

+ (id)usageFromMobileInstallationForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)mobileInstallationQueue;
+ (id)ODRUsageForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)ODRConnection;
+ (id)_serverQueue;
+ (id)propertyQueue;

- (id)onDemandResourcesUsage;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)dynamicUsage;
- (id)staticUsage;
- (id)debugDescription;
- (id)sharedUsage;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fetchClientSideWithError:(id *)a0;
- (void)removeAllCachedUsageValues;

@end
