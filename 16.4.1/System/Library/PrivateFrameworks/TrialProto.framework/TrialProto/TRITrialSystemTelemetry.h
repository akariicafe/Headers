@class TRITrialCloudKitContainerOriginFields, NSString, TRITrialMobileAssetOriginFields, TRITrialDownloadStatusFields, TRITrialAssetPurgeFields, TRITrialOnDemandFactorFields, TRITrialDownloadSettingsFields, TRITrialExperimentFields, TRITrialFactorFields, TRITrialRolloutFields;

@interface TRITrialSystemTelemetry : PBCodable <NSCopying> {
    struct { unsigned char prevExperimentOptOutStatus : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientTeamId;
@property (retain, nonatomic) NSString *clientTeamId;
@property (readonly, nonatomic) BOOL hasClientProjectId;
@property (retain, nonatomic) NSString *clientProjectId;
@property (readonly, nonatomic) BOOL hasExperimentFields;
@property (retain, nonatomic) TRITrialExperimentFields *experimentFields;
@property (readonly, nonatomic) BOOL hasRolloutFields;
@property (retain, nonatomic) TRITrialRolloutFields *rolloutFields;
@property (readonly, nonatomic) BOOL hasClientDeploymentEnv;
@property (retain, nonatomic) NSString *clientDeploymentEnv;
@property (readonly, nonatomic) BOOL hasTrialdTaskName;
@property (retain, nonatomic) NSString *trialdTaskName;
@property (readonly, nonatomic) BOOL hasPrevOsBuild;
@property (retain, nonatomic) NSString *prevOsBuild;
@property (readonly, nonatomic) BOOL hasPrevBcp47DeviceLocale;
@property (retain, nonatomic) NSString *prevBcp47DeviceLocale;
@property (readonly, nonatomic) BOOL hasPrevLanguageCode;
@property (retain, nonatomic) NSString *prevLanguageCode;
@property (readonly, nonatomic) BOOL hasPrevRegionCode;
@property (retain, nonatomic) NSString *prevRegionCode;
@property (readonly, nonatomic) BOOL hasClientDeploymentId;
@property (retain, nonatomic) NSString *clientDeploymentId;
@property (readonly, nonatomic) BOOL hasFactorFields;
@property (retain, nonatomic) TRITrialFactorFields *factorFields;
@property (readonly, nonatomic) BOOL hasDownloadSettingsFields;
@property (retain, nonatomic) TRITrialDownloadSettingsFields *downloadSettingsFields;
@property (readonly, nonatomic) BOOL hasContainerOriginFields;
@property (retain, nonatomic) TRITrialCloudKitContainerOriginFields *containerOriginFields;
@property (readonly, nonatomic) BOOL hasAssetPurgeFields;
@property (retain, nonatomic) TRITrialAssetPurgeFields *assetPurgeFields;
@property (readonly, nonatomic) BOOL hasDownloadStatusFields;
@property (retain, nonatomic) TRITrialDownloadStatusFields *downloadStatusFields;
@property (readonly, nonatomic) BOOL hasOnDemandFactorFields;
@property (retain, nonatomic) TRITrialOnDemandFactorFields *onDemandFactorFields;
@property (readonly, nonatomic) BOOL hasPrevCarrierCountryIsoCode;
@property (retain, nonatomic) NSString *prevCarrierCountryIsoCode;
@property (readonly, nonatomic) BOOL hasPrevCarrierBundleIdentifier;
@property (retain, nonatomic) NSString *prevCarrierBundleIdentifier;
@property (nonatomic) BOOL hasPrevExperimentOptOutStatus;
@property (nonatomic) BOOL prevExperimentOptOutStatus;
@property (readonly, nonatomic) BOOL hasMobileAssetOriginFields;
@property (retain, nonatomic) TRITrialMobileAssetOriginFields *mobileAssetOriginFields;

- (id)ensureMobileAssetOriginFields;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)ensureAssetPurgeFields;
- (id)ensureExperimentFields;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)ensureRolloutFields;
- (unsigned long long)hash;
- (void)setFieldsForDownloadOptions:(id)a0;
- (id)ensureOnDemandFactorFields;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)ensureFactorFields;
- (void).cxx_destruct;
- (void)setFieldsForRolloutDeployment:(id)a0;

@end
