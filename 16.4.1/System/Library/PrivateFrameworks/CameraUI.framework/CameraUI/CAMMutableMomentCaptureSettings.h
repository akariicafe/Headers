@class NSString;

@interface CAMMutableMomentCaptureSettings : CAMMomentCaptureSettings

@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long torchMode;
@property (nonatomic) long long hdrMode;
@property (nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) unsigned long long userInitiationTime;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) BOOL shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic) BOOL autoSpatialOverCaptureEnabled;
@property (nonatomic) long long photoEncodingBehavior;
@property (nonatomic) long long maximumPhotoResolution;

- (void)setTorchMode:(long long)a0;
- (void)setFlashMode:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setPersistenceUUID:(id)a0;
- (void)setPhotoQualityPrioritization:(long long)a0;
- (void)setHdrMode:(long long)a0;
- (void)setPhotoEncodingBehavior:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLowLightMode:(long long)a0;
- (void)setUserInitiationTime:(unsigned long long)a0;
- (void)setMaximumPhotoResolution:(long long)a0;
- (void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)a0;
- (void)setAutoSpatialOverCaptureEnabled:(BOOL)a0;
- (void)setShouldDisableCameraSwitchingDuringVideoRecording:(BOOL)a0;

@end
