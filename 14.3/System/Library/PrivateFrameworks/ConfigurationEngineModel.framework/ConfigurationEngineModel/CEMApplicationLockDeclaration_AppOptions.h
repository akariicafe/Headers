@class NSSet, NSNumber;

@interface CEMApplicationLockDeclaration_AppOptions : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadDisableTouch;
@property (copy, nonatomic) NSNumber *payloadDisableDeviceRotation;
@property (copy, nonatomic) NSNumber *payloadDisableVolumeButtons;
@property (copy, nonatomic) NSNumber *payloadDisableRingerSwitch;
@property (copy, nonatomic) NSNumber *payloadDisableSleepWakeButton;
@property (copy, nonatomic) NSNumber *payloadDisableAutoLock;
@property (copy, nonatomic) NSNumber *payloadEnableVoiceOver;
@property (copy, nonatomic) NSNumber *payloadEnableZoom;
@property (copy, nonatomic) NSNumber *payloadEnableInvertColors;
@property (copy, nonatomic) NSNumber *payloadEnableAssistiveTouch;
@property (copy, nonatomic) NSNumber *payloadEnableSpeakSelection;
@property (copy, nonatomic) NSNumber *payloadEnableMonoAudio;

+ (id)buildRequiredOnly;
+ (id)buildWithDisableTouch:(id)a0 withDisableDeviceRotation:(id)a1 withDisableVolumeButtons:(id)a2 withDisableRingerSwitch:(id)a3 withDisableSleepWakeButton:(id)a4 withDisableAutoLock:(id)a5 withEnableVoiceOver:(id)a6 withEnableZoom:(id)a7 withEnableInvertColors:(id)a8 withEnableAssistiveTouch:(id)a9 withEnableSpeakSelection:(id)a10 withEnableMonoAudio:(id)a11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
