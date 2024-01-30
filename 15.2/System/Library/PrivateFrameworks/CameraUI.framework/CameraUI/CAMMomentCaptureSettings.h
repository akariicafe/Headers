@class NSString;

@interface CAMMomentCaptureSettings : NSObject

@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, nonatomic) long long flashMode;
@property (readonly, nonatomic) long long torchMode;
@property (readonly, nonatomic) long long hdrMode;
@property (readonly, nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;
@property (readonly, nonatomic) long long lowLightMode;
@property (readonly, nonatomic) unsigned long long userInitiationTime;
@property (readonly, nonatomic) long long photoQualityPrioritization;
@property (readonly, nonatomic) BOOL shouldDisableCameraSwitchingDuringVideoRecording;
@property (readonly, nonatomic) BOOL autoSpatialOverCaptureEnabled;
@property (readonly, nonatomic) long long photoEncodingBehavior;

- (id)initWithSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
