@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isUIFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isMapsNavigationActive;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL isSiriAutoPrompt;
@property (readonly, nonatomic) BOOL isMediaPlaying;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) BOOL isDeviceScreenON;
@property (readonly, nonatomic) BOOL isInPocket;
@property (readonly, nonatomic) BOOL liftToWakeDetected;
@property (readonly, nonatomic) BOOL userInitiatedWakeDetected;
@property (readonly, nonatomic) long long deviceMotion;
@property (readonly, nonatomic) long long deviceRaised;
@property (readonly, nonatomic) long long faceDetected;
@property (readonly, nonatomic) long long touchScreenDetected;
@property (readonly, nonatomic) long long buttonPressDetected;
@property (readonly, nonatomic) long long flatDevicePosture;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long isInWorkout;
@property (readonly, nonatomic) long long isBacklightOn;
@property (readonly, nonatomic) long long isInWaterLock;
@property (readonly, nonatomic) long long isInSleepLock;
@property (readonly, nonatomic) long long isInTheaterMode;
@property (readonly, nonatomic) long long isOnWrist;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsEyesFree:(BOOL)a0 isUIFree:(BOOL)a1 isForCarDND:(BOOL)a2 isMapsNavigationActive:(BOOL)a3 isVoiceTriggerRequest:(BOOL)a4 isConnectedToCarPlay:(BOOL)a5 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a6 isSiriAutoPrompt:(BOOL)a7 isMediaPlaying:(BOOL)a8 userTypedInSiri:(BOOL)a9 modeOverrideValue:(id)a10 isDeviceScreenON:(BOOL)a11 isInPocket:(BOOL)a12 liftToWakeDetected:(BOOL)a13 userInitiatedWakeDetected:(BOOL)a14 deviceMotion:(long long)a15 deviceRaised:(long long)a16 faceDetected:(long long)a17 touchScreenDetected:(long long)a18 buttonPressDetected:(long long)a19 flatDevicePosture:(long long)a20 deviceOrientation:(long long)a21 isInWorkout:(long long)a22 isBacklightOn:(long long)a23 isInWaterLock:(long long)a24 isInSleepLock:(long long)a25 isInTheaterMode:(long long)a26 isOnWrist:(long long)a27;

@end
