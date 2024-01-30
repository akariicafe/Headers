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

+ (id)ODRUsageForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)_serverQueue;
+ (id)ODRConnection;
+ (id)mobileInstallationQueue;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)propertyQueue;

- (void)encodeWithCoder:(id)a0;
- (id)onDemandResourcesUsage;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (void)removeAllCachedUsageValues;
- (BOOL)fetchClientSideWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)sharedUsage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)staticUsage;
- (id)dynamicUsage;
- (id)debugDescription;

@end
