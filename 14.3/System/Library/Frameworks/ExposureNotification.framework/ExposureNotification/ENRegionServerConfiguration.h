@class NSArray, ENRegion, NSString;

@interface ENRegionServerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long enVersion;
@property (readonly, nonatomic) BOOL enEnabled;
@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, nonatomic) BOOL hasSubdivisions;
@property (readonly, copy, nonatomic) NSArray *subdivisions;
@property (readonly, copy, nonatomic) NSString *appBundleID;
@property (readonly, copy, nonatomic) NSString *publicKey;
@property (readonly, copy, nonatomic) NSString *publicKeyVersion;
@property (readonly, nonatomic) double applicationBackgroundRuntimeInterval;
@property (readonly, nonatomic) double rpiAdvertisementTolerance;
@property (readonly, nonatomic) double rpiDuplicateAdvertisementTolerance;
@property (readonly, nonatomic) double callbackInterval;
@property (readonly, nonatomic) unsigned int dailyDetectExposureLimit;
@property (readonly, nonatomic) unsigned int detectExposureNKDLimit;
@property (readonly, nonatomic) unsigned int numberOfAdvSamplesForRPIThreshold;
@property (readonly, nonatomic) double forceAPWakeIntervalThreshold;
@property (readonly, nonatomic) BOOL dynamicAlgorithmEnabled;
@property (readonly, nonatomic) double dynamicThrottleDownDuration;
@property (readonly, nonatomic) unsigned int dynamicThrottleDownAdvDensity;
@property (readonly, nonatomic) char dynamicThrottleDownRSSI;
@property (readonly, nonatomic) double dynamicThrottleUpDuration;
@property (readonly, nonatomic) unsigned int dynamicThrottleUpAdvDensity;
@property (readonly, nonatomic) double osTriggeredAppRunInterval;
@property (readonly, nonatomic) double regionTransitionGracePeriod;
@property (readonly, nonatomic) double regionDisabledTransitionGracePeriod;
@property (readonly, nonatomic) BOOL enableV1;
@property (copy, nonatomic) NSString *phaTelemetryPublicCertificateChain;
@property (copy, nonatomic) NSString *phaTelemetryAppleCertificateChain;
@property (copy, nonatomic) NSString *phaTelemetryEndpoint;
@property (copy, nonatomic) NSString *phaTelemetryOptInMessage;
@property (copy, nonatomic) NSString *partnerTelemetryPublicCertificateChain;
@property (copy, nonatomic) NSString *partnerTelemetryAppleCertificateChain;
@property (copy, nonatomic) NSString *partnerTelemetryEndpoint;
@property (copy, nonatomic) NSString *appleTelemetryEndpoint;
@property (copy, nonatomic) NSString *appleTelemetryEndpointCredentials;
@property (readonly, nonatomic) BOOL telemetryAuthorization;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredLocalizationsFromArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithServerResponseDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
