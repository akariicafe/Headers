@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic;
@property (nonatomic) BOOL isRequestDuringActiveCall;
@property (retain, nonatomic) NSDictionary *activationMetadata;
@property (retain, nonatomic) NSString *turnIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic) BOOL isRequestFromSpokenNotification;

+ (id)defaultContext;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForDarwinVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForDictation;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForHomeButton;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)a0;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForServerInvoke;
+ (id)contextForVoiceTriggerTraining;
+ (id)recordTypeString:(long long)a0;

- (id)initWithXPCObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isServerInvoked;
- (BOOL)isUIButtonPress;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (long long)avvcActivationMode:(long long)a0;
- (id)avvcContext;
- (id)initWithAVVCContext:(id)a0;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (BOOL)isAudioRecordTypeSupportedByRemora;
- (BOOL)isBuiltInVoiceTriggered;
- (BOOL)isDarwinVoiceTriggered;
- (BOOL)isDictation;
- (BOOL)isGibraltarVoiceTriggered;
- (BOOL)isHearstDoubleTapTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isHomePressed;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isRTSTriggered;
- (BOOL)isRemoraButtonPress;
- (BOOL)isRemoraTriggered;
- (BOOL)isRemoraVoiceTriggered;
- (BOOL)isStarkTriggered;
- (BOOL)isTVRemote;
- (BOOL)isTriggeredFromHearst;
- (BOOL)isVoiceTriggered;
- (BOOL)isVoiceTriggeredFromRemoteXPCDevice;
- (BOOL)isiOSButtonPress;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;

@end
