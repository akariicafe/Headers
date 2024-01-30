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

+ (id)ODRConnection;
+ (id)mobileInstallationQueue;
+ (id)propertyQueue;
+ (id)ODRUsageForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)_serverQueue;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (id)dynamicUsage;
- (id)onDemandResourcesUsage;
- (id)debugDescription;
- (id)staticUsage;
- (void)removeAllCachedUsageValues;
- (BOOL)fetchClientSideWithError:(id *)a0;
- (id)init;
- (id)sharedUsage;
- (void).cxx_destruct;

@end
