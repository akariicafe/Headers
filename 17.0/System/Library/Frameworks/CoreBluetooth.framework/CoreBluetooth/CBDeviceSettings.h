@class NSString;

@interface CBDeviceSettings : NSObject <CUXPCCodable>

@property (nonatomic) char aclPriority;
@property (nonatomic) unsigned char adaptiveVolumeConfig;
@property (nonatomic) char allowsAutoRoute;
@property (nonatomic) char audioRouteHidden;
@property (nonatomic) unsigned char clickHoldModeLeft;
@property (nonatomic) unsigned char clickHoldModeRight;
@property (nonatomic) unsigned char conversationDetectConfig;
@property (nonatomic) unsigned char crownRotationDirection;
@property (nonatomic) unsigned long long deviceFlagsMask;
@property (nonatomic) unsigned long long deviceFlagsValue;
@property (nonatomic) char doubleTapActionLeft;
@property (nonatomic) char doubleTapActionRight;
@property (nonatomic) unsigned char endCallConfig;
@property (nonatomic) int listeningMode;
@property (nonatomic) unsigned int listeningModeConfigs;
@property (nonatomic) char microphoneMode;
@property (nonatomic) unsigned char muteControlConfig;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char placementMode;
@property (nonatomic) char relinquishAudioRoute;
@property (nonatomic) unsigned char selectiveSpeechListeningConfig;
@property (nonatomic) char smartRoutingMode;
@property (nonatomic) char spatialAudioAllowed;
@property (nonatomic) int spatialAudioMode;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
