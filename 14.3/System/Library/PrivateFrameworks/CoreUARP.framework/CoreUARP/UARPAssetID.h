@class NSString, NSArray, NSDate, NSNumber, NSObject;
@protocol OS_os_log;

@interface UARPAssetID : NSObject <NSCopying, NSSecureCoding> {
    NSString *_remoteBuildManifestPlistPath;
    NSNumber *_deploymentDay;
    NSNumber *_deploymentPercent;
    BOOL _signatureValidationNeeded;
    long long _validationStatus;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (copy) NSString *remotePath;
@property (readonly, copy) NSString *assetVersion;
@property (readonly, copy) NSString *localPath;
@property (readonly) long long downloadStatus;
@property (readonly) long long updateAvailabilityStatus;
@property (readonly) long long releaseNotesDownloadStatus;
@property (readonly) NSString *releaseNotesRemotePath;
@property (readonly) NSString *releaseNotesLocalPath;
@property (readonly) long long releaseNotesAvailabilityStatus;
@property (readonly) NSString *releaseDate;
@property (readonly) NSDate *assetReleaseDate;
@property (readonly) NSNumber *releaseNotesFileSize;
@property (readonly) NSNumber *firmwareFileSize;
@property (readonly) NSArray *deploymentRules;
@property (readonly) BOOL deploymentAllowed;

- (void)setReleaseDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)setDownloadStatus:(long long)a0;
- (long long)validationStatus;
- (id)description;
- (void)setAssetVersion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (const char *)typeString;
- (id)initInMemory;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocationType:(long long)a0 remotePath:(id)a1;
- (id)initWithLocationType:(long long)a0 remotePath:(id)a1 releaseNotesRemotePath:(id)a2;
- (void)setDeploymentDay:(id)a0;
- (id)deploymentDay;
- (void)setDeploymentPercent:(id)a0;
- (id)deploymentPercent;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (BOOL)analyticsIsEqual:(id)a0;
- (id)rawDescription;
- (void)setRemoteBuildManifestPlistPath:(id)a0;
- (void)setLocalPath:(id)a0;
- (void)setUpdateAvailabilityStatus:(long long)a0;
- (void)setReleaseNotesLocalPath:(id)a0;
- (void)setReleaseNotesRemotePath:(id)a0;
- (void)setReleaseNotesDownloadStatus:(long long)a0;
- (void)setReleaseNotesAvailabilityStatus:(long long)a0;
- (void)setReleaseNotesFileSize:(id)a0;
- (void)setFirmwareFileSize:(id)a0;
- (void)setAssetReleaseDate:(id)a0;
- (void)setDeploymentRules:(id)a0;
- (void)setDeploymentAllowed:(BOOL)a0;
- (void)setSignatureValidationNeeded:(BOOL)a0;
- (id)remoteBuildManifestPlistPath;
- (id)_createUARPDeploymentRules:(id)a0;
- (BOOL)isDeploymentAllowed;
- (BOOL)signatureValidationNeeded;
- (void)setValidationStatus:(long long)a0;
- (void)processUARPDeploymentRules:(id)a0;

@end
