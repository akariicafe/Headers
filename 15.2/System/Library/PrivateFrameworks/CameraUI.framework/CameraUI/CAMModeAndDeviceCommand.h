@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;
@property (readonly, nonatomic) double _minimumExecutionTime;
@property (readonly, nonatomic) int _requestID;
@property (retain, nonatomic, setter=_setConfigurationError:) NSError *_configurationError;

- (BOOL)requiresSessionModification;
- (BOOL)_wantsLowLightBoostForMode:(long long)a0 device:(long long)a1;
- (id)userInfo;
- (void)_performPostConfigurationSetupForGraphConfiguration:(id)a0 withContext:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)sessionModificationLogReason;
- (BOOL)_wantsLivePhotoMetadataInVideosForMode:(long long)a0 device:(long long)a1;
- (id)_existingInputsWithContext:(id)a0 without:(id)a1;
- (double)sessionModificationMinimumExecutionTime;
- (BOOL)_isStillImageMode:(long long)a0;
- (id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)a0;
- (BOOL)_shouldEnableDeferredProcessingForMode:(long long)a0;
- (void).cxx_destruct;
- (id)initWithGraphConfiguration:(id)a0 minimumExecutionTime:(double)a1 requestID:(int)a2;
- (id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)a0;
- (void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)a0 withContext:(id)a1;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_existingOutputsWithContext:(id)a0 without:(id)a1;
- (BOOL)_shouldEnableLivePhotoCaptureForMode:(long long)a0 device:(long long)a1;
- (BOOL)_wantsQuadraHighResolutionForMode:(long long)a0 device:(long long)a1;
- (void)_sanitizeDeviceUsingContext:(id)a0;
- (id)_specificFramerateCommandForGraphConfiguration:(id)a0 withContext:(id)a1;
- (id)_desiredInputsWithContext:(id)a0;

@end
