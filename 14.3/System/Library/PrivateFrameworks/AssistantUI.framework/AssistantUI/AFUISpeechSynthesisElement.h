@class NSString, VSSpeechRequest, SAUIAudioData, VSPresynthesizedAudioRequest, NSDictionary;
@protocol AFUISpeechSynthesisElementDelegate;

@interface AFUISpeechSynthesisElement : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) BOOL eligibleForProcessing;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) BOOL preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (nonatomic) BOOL isPhonetic;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic, getter=isDelayed) BOOL delayed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (nonatomic) long long synthesisResult;
@property (weak, nonatomic) id<AFUISpeechSynthesisElementDelegate> delegate;
@property (readonly, nonatomic) NSString *animationIdentifier;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL shouldCache;
@property (nonatomic) BOOL synthesizesWhileRecording;

- (void).cxx_destruct;
- (id)description;
- (void)_updateSynthesisEligibility;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 language:(id)a3 gender:(id)a4 provisional:(BOOL)a5 eligibleAfterDuration:(double)a6 delayed:(BOOL)a7 preparation:(id /* block */)a8 completion:(id /* block */)a9 animationIdentifier:(id)a10 analyticsContext:(id)a11 speakableContextInfo:(id)a12 canUseServerTTS:(BOOL)a13 eligibilityChangedQueue:(id)a14;
- (void)executeCompletion;

@end
