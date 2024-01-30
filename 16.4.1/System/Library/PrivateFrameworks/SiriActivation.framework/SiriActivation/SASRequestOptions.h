@class NSURL, AFSpeechRequestOptions, AFRequestInfo, NSDictionary, NSMutableArray, AFApplicationContext, NSString, SASPronunciationContext, NSArray, AFBulletin, NSNumber, NSUUID;

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    long long _requestSource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestSource;
@property (copy, nonatomic) NSString *activationDeviceIdentifier;
@property (retain, nonatomic) AFBulletin *bulletin;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) AFApplicationContext *directActionApplicationContext;
@property (nonatomic) long long directActionEvent;
@property (copy, nonatomic) NSString *serverCommandId;
@property (nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest;
@property (retain, nonatomic) SASPronunciationContext *pronunciationContext;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *speechFileURL;
@property (nonatomic) double expectedTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic) long long longPressBehavior;
@property (readonly, nonatomic, getter=isForStark) BOOL forStark;
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList;
@property (nonatomic) BOOL isForCarDND;
@property (nonatomic) BOOL isConnectedToCarPlay;
@property (nonatomic) unsigned long long carDNDStatus;
@property (nonatomic, getter=isRightHandDrive) BOOL rightHandDrive;
@property (readonly, nonatomic) BOOL isForAppleTV;
@property (readonly, nonatomic) BOOL isForEyesFree;
@property (readonly, nonatomic) BOOL isForBluetoothCar;
@property (readonly, nonatomic) BOOL isForUIFree;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, nonatomic) BOOL isInAutoPrompt;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) long long inputType;
@property (nonatomic, getter=isInitialBringUp) BOOL initialBringUp;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useStreamingDictation;
@property (retain, nonatomic) NSNumber *homeButtonUpFromBeep;
@property (copy, nonatomic) NSDictionary *continuityInfo;
@property (retain, nonatomic) AFRequestInfo *requestInfo;
@property (retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (nonatomic) BOOL acousticIdEnabled;
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) BOOL predictedRecordRouteIsZLL;
@property (readonly, nonatomic) BOOL isRemotePresentationBringUp;
@property (retain, nonatomic) NSString *uiPresentationIdentifier;
@property (retain, nonatomic) NSMutableArray *instrumentationEvents;
@property (retain, nonatomic) NSUUID *previousTurnIdentifier;
@property (retain, nonatomic) NSArray *contextAppInfosForSiriViewController;
@property (retain, nonatomic) NSDictionary *testingContext;
@property (nonatomic) unsigned long long currentLockState;
@property (copy, nonatomic) NSUUID *activationEventInstrumentationIdenifier;
@property (copy, nonatomic) NSString *startRecordingSoundId;
@property (nonatomic, getter=isShortButtonPressAction) BOOL shortButtonPressAction;
@property (copy, nonatomic) SASRequestOptions *originalRequestOptions;
@property (nonatomic) long long presentationMode;
@property (nonatomic) unsigned long long tvRemoteType;
@property (nonatomic) BOOL isTVRemoteSourcePTTEligible;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestSource:(long long)a0;
- (void)_configureStreamingDictationForSource:(long long)a0;
- (BOOL)_isForSpeechRequest;
- (BOOL)_isTypeToSiriPermittedAndEnabledForRequestOptions;
- (void)_updateWithSystemState:(id)a0 forcefully:(BOOL)a1;
- (id)initWithRequestSource:(long long)a0 uiPresentationIdentifier:(id)a1;
- (id)initWithRequestSource:(long long)a0 uiPresentationIdentifier:(id)a1 buttonContext:(id)a2;
- (id)initWithRequestSource:(long long)a0 uiPresentationIdentifier:(id)a1 systemState:(id)a2;
- (BOOL)isATVRemotePTTEligible;
- (BOOL)isH1Activation;
- (BOOL)isHTTRequestSource;
- (void)updateIfNeededWithSystemState:(id)a0;

@end
