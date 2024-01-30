@class ARImageSensorSettings, NSArray, NSString, ARParentImageSensorSettings, ARVideoFormat;
@protocol ARReplaySensorProtocol;

@interface ARConfiguration : NSObject <NSCopying>

@property (class, readonly, nonatomic) BOOL supportsTimeOfFlightProjectorMode;
@property (class, nonatomic) BOOL shouldUse30FPSJasperFormats;
@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) NSArray *supportedVideoFormats;

@property (nonatomic) BOOL smartPersonOcclusionEnabled;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettings;
@property (retain, nonatomic) NSArray *customSensors;
@property (nonatomic) unsigned long long lightEstimation;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (nonatomic, getter=isPersonMetadataEnabled) BOOL personMetadataEnabled;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) BOOL disableOcclusionForPersonSegmentation;
@property (nonatomic) BOOL mirroredFrameOutput;
@property (readonly, nonatomic) id<ARReplaySensorProtocol> replaySensor;
@property (retain, nonatomic) NSString *timeOfFlightProjectorMode;
@property (retain, nonatomic) ARVideoFormat *videoFormat;
@property (nonatomic) long long worldAlignment;
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;
@property (nonatomic) BOOL providesAudioData;
@property (nonatomic) unsigned long long frameSemantics;

+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)_supportedVideoFormatsForJasper;
+ (id)_querySupportedVideoFormatsForJasper;

- (id)description;
- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)_depthPrioritization;
- (BOOL)isKindOfConfiguration:(Class)a0;
- (id)getAsKindOfConfiguration:(Class)a0;
- (void)createTechniques:(id)a0;
- (id)secondaryTechniques;
- (id)renderingTechnique;
- (id)techniques;
- (BOOL)shouldUseJasper;
- (id)descriptionWithoutBrackets;
- (id)depthSensorSettingsForJasper;

@end
