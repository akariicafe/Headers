@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureInput *input;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *formatDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) NSString *sourceDeviceType;
@property (readonly, nonatomic) long long sourceDevicePosition;

+ (void)initialize;
+ (id)portWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;
+ (BOOL)automaticallyNotifiesObserversOfClock;

- (id)valueForUndefinedKey:(id)a0;
- (void)bumpChangeSeed;
- (void)setOwner:(id)a0;
- (id)_initWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;
- (int)changeSeed;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)a0;
- (BOOL)sourcesFromConstituentDevice;
- (void)_setClock:(struct OpaqueCMClock { } *)a0;
- (id)description;
- (void)_updateCenterStageUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (id)sourceID;
- (void)dealloc;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;

@end
