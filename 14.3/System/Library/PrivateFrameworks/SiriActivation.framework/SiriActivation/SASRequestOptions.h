@class NSURL, AFSpeechRequestOptions, AFRequestInfo, NSDictionary, SAGuidanceCheckForGuideUpdateContext, NSMutableArray, NSString, SASPronunciationContext, NSArray, AFBulletin, NSNumber, NSUUID;

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    long long _requestSource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestSource;
@property (copy, nonatomic) NSString *activationDeviceIdentifier;
@property (retain, nonatomic) AFBulletin *bulletin;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSDictionary *directActionContextPayload;
@property (copy, nonatomic) SAGuidanceCheckForGuideUpdateContext *checkForGuideUpdateContext;
@property (nonatomic) long long directActionEvent;
@property (copy, nonatomic) NSString *serverCommandId;
@property (nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest;
@property (retain, nonatomic) SASPronunciationContext *pronunciationContext;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *speechFileURL;
@property (nonatomic) double expectedTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) double buttonDownTimestamp;
@property (readonly, nonatomic, getter=isForStark) BOOL forStark;
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList;
@property (nonatomic) BOOL isForCarDND;
@property (nonatomic) BOOL isConnectedToCarPlay;
@property (nonatomic) unsigned long long carDNDStatus;
@property (nonatomic, getter=isRightHandDrive) BOOL rightHandDrive;
@property (readonly, nonatomic) BOOL isForAppleTV;
@property (readonly, nonatomic) BOOL isForEyesFree;
@property (readonly, nonatomic, getter=isForSpeechRequest) BOOL forSpeechRequest;
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
@property (retain, nonatomic) NSString *uiPresentationIdentifier;
@property (retain, nonatomic) NSMutableArray *instrumentationEvents;
@property (retain, nonatomic) NSUUID *previousTurnIdentifier;
@property (retain, nonatomic) NSArray *contextAppInfosForSiriViewController;
@property (retain, nonatomic) NSDictionary *testingContext;
@property (nonatomic) unsigned long long currentLockState;
@property (copy, nonatomic) NSString *startRecordingSoundId;
@property (nonatomic, getter=isShortButtonPressAction) BOOL shortButtonPressAction;
@property (copy, nonatomic) SASRequestOptions *originalRequestOptions;
@property (nonatomic) long long presentationMode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestSource:(long long)a0 uiPresentationIdentifier:(id)a1;
- (void)updateIfNeededWithSystemState:(id)a0;
- (id)initWithRequestSource:(long long)a0 uiPresentationIdentifier:(id)a1 systemState:(id)a2;
- (BOOL)isHTTRequestSource;
- (void)_configureStreamingDictationForSource:(long long)a0;
- (void)_updateWithSystemState:(id)a0 forcefully:(BOOL)a1;
- (BOOL)isB288Activation;
- (BOOL)_isTypeToSiriPermittedAndEnabledForRequestOptions;
- (long long)_presentationIdentifierFromUIPresentationIdentifier:(id)a0;
- (id)initWithRequestSource:(long long)a0;

@end
