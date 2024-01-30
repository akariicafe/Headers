@class DMFApplicationInstallProgress, NSString, NSDictionary, NSData, NSNumber;

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *shortVersionString;
@property (readonly, copy, nonatomic) NSString *applicationType;
@property (readonly, copy, nonatomic) NSNumber *adamID;
@property (readonly, copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, copy, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (readonly, copy, nonatomic) NSNumber *staticUsage;
@property (readonly, copy, nonatomic) NSNumber *dynamicUsage;
@property (readonly, copy, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, copy, nonatomic) NSString *unusedRedemptionCode;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (readonly, copy, nonatomic) NSDictionary *feedback;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long managementFlags;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isValidated;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isAppUpdate;
@property (readonly, nonatomic) BOOL isBetaApp;
@property (readonly, nonatomic) BOOL isRemoveable;
@property (readonly, nonatomic) BOOL isTapToPayScreenLock;
@property (readonly, nonatomic) BOOL fileSharingEnabled;
@property (readonly, nonatomic) DMFApplicationInstallProgress *progress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0 bundleIdentifier:(id)a1 name:(id)a2 iconData:(id)a3 bundleVersion:(id)a4 shortVersionString:(id)a5 applicationType:(id)a6 adamID:(id)a7 externalVersionIdentifier:(id)a8 betaExternalVersionIdentifier:(id)a9 staticUsage:(id)a10 dynamicUsage:(id)a11 onDemandResourcesUsage:(id)a12 unusedRedemptionCode:(id)a13 attributes:(id)a14 configuration:(id)a15 feedback:(id)a16 state:(unsigned long long)a17 managementFlags:(unsigned long long)a18 isManaged:(BOOL)a19 isValidated:(BOOL)a20 isInstalled:(BOOL)a21 isPlaceholder:(BOOL)a22 isAppUpdate:(BOOL)a23 isBetaApp:(BOOL)a24 isRemoveable:(BOOL)a25 isTapToPayScreenLock:(BOOL)a26 fileSharingEnabled:(BOOL)a27 progress:(id)a28;
- (id)initWithBundleIdentifier:(id)a0 name:(id)a1 iconData:(id)a2 applicationType:(id)a3 adamID:(id)a4 externalVersionNumber:(id)a5 betaExternalVersionIdentifier:(id)a6 isInstalled:(BOOL)a7 isPlaceholder:(BOOL)a8 isAppUpdate:(BOOL)a9 isBetaApp:(BOOL)a10 isRemoveable:(BOOL)a11 isTapToPayScreenLock:(BOOL)a12 fileSharingEnabled:(BOOL)a13 progress:(id)a14;

@end
