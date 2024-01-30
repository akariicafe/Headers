@class NSString, NSArray, NSData, NSDictionary, MIStoreMetadata;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installTargetType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isDeveloperInstall) BOOL developerInstall;
@property (nonatomic, getter=isSystemAppInstall) BOOL systemAppInstall;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL waitForDeletion;
@property (nonatomic) unsigned long long lsInstallType;
@property (copy, nonatomic) MIStoreMetadata *iTunesMetadata;
@property (copy, nonatomic) NSData *sinfData;
@property (copy, nonatomic) NSData *iTunesArtworkData;
@property (copy, nonatomic) NSData *geoJSONData;
@property (copy, nonatomic) NSArray *provisioningProfiles;
@property (nonatomic) BOOL skipWatchAppInstall;
@property (nonatomic) BOOL skipBlacklist;
@property (nonatomic) BOOL installForMigrator;
@property (nonatomic) BOOL allowLocalProvisioned;
@property (nonatomic) BOOL performAPFSClone;
@property (nonatomic) unsigned long long autoInstallOverride;
@property (readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLegacyOptionsDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
