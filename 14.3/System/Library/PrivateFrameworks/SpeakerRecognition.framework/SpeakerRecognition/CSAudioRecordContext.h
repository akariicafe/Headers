@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

+ (id)defaultContext;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForServerInvoke;
+ (id)recordTypeString:(long long)a0;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForVoiceTriggerTraining;
+ (id)contextForHomeButton;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)avvcContext;
- (id)avvcContextSettings;
- (BOOL)isRTSTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isBuiltInVoiceTriggered;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (long long)avvcActivationMode:(long long)a0;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isHearstDoubleTapTriggered;
- (id)initWithAVVCContext:(id)a0;
- (BOOL)isVoiceTriggered;
- (BOOL)isTriggeredFromHearst;
- (BOOL)isHomePressed;
- (BOOL)isServerInvoked;
- (BOOL)isStarkTriggered;
- (BOOL)isDictation;

@end
