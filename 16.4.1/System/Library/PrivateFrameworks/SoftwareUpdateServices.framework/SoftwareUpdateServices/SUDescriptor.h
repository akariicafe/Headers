@class NSString, SUDocumentation, NSDictionary, NSData, NSDate;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying> {
    BOOL _downloadAllowableForCellular;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDocumentation *documentation;
@property (retain, nonatomic) NSString *publisher;
@property (retain, nonatomic) NSString *productSystemName;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productVersionExtra;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSString *prerequisiteBuild;
@property (retain, nonatomic) NSString *prerequisiteOS;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) unsigned long long installationSize;
@property (nonatomic) unsigned long long minimumSystemPartitionSize;
@property (nonatomic) int updateType;
@property (nonatomic) BOOL autoDownloadAllowableForCellular;
@property (nonatomic, getter=isDownloadable) BOOL downloadable;
@property (nonatomic, getter=isDownloadableOverCellular) BOOL downloadableOverCellular;
@property (nonatomic, getter=siriVoiceDeletionDisabled, setter=_setDisableSiriVoiceDeletion:) BOOL disableSiriVoiceDeletion;
@property (nonatomic, getter=cdLevel4Disabled, setter=_setDisableCDLevel4:) BOOL disableCDLevel4;
@property (nonatomic, getter=appDemotionDisabled, setter=_setDisableAppDemotion:) BOOL disableAppDemotion;
@property (nonatomic, getter=installTonightDisabled, setter=_setDisableInstallTonight:) BOOL disableInstallTonight;
@property (nonatomic) BOOL rampEnabled;
@property (nonatomic) BOOL criticalOutOfBoxOnly;
@property (nonatomic) BOOL autoUpdateEnabled;
@property (retain, nonatomic) NSString *setupCritical;
@property (retain, nonatomic) NSString *criticalDownloadPolicy;
@property (retain, nonatomic) NSDictionary *systemPartitionPadding;
@property (retain, nonatomic, setter=setSEPDigest:) NSData *sepDigest;
@property (retain, nonatomic, setter=setRSEPDigest:) NSData *rsepDigest;
@property (retain, nonatomic, setter=setSEPTBMDigest:) NSData *sepTBMDigest;
@property (retain, nonatomic, setter=setRSEPTBMDigest:) NSData *rsepTBMDigest;
@property (retain, nonatomic) NSDate *releaseDate;
@property (nonatomic) unsigned long long mdmDelayInterval;
@property (retain, nonatomic) NSString *assetID;
@property (nonatomic) BOOL hideInstallAlert;
@property (nonatomic) unsigned long long audienceType;
@property (nonatomic) unsigned long long preferenceType;
@property (nonatomic) unsigned long long upgradeType;
@property (nonatomic) BOOL promoteAlternateUpdate;
@property (nonatomic) BOOL isSplatOnly;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) BOOL mandatoryUpdateEligible;
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMin;
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMax;
@property (nonatomic) BOOL mandatoryUpdateOptional;
@property (nonatomic) BOOL mandatoryUpdateRestrictedToOutOfTheBox;
@property (nonatomic, getter=_unarchiveSize, setter=_setUnarchiveSize:) unsigned long long unarchiveSize;
@property (nonatomic, getter=_msuPrepareSize, setter=_setMsuPrepareSize:) unsigned long long msuPrepareSize;
@property (nonatomic, getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:) BOOL streamingZipCapable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)preparationSize;
- (unsigned long long)totalRequiredFreeSpace;
- (id)updateTypeName;
- (id)_buildCompareKey;
- (BOOL)_hasValue:(id)a0;
- (BOOL)isEmergencyOrCritical;
- (BOOL)isValidDescriptor;

@end
