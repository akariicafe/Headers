@class SiriContext;

@interface SASActivationRequest : NSObject {
    int _waketimeMIB[12];
    unsigned long long _waketimeMIBSize;
}

@property (nonatomic) long long requestSource;
@property (nonatomic) long long activationType;
@property (nonatomic) long long activationEvent;
@property (retain, nonatomic) SiriContext *context;
@property (nonatomic) double activationTime;
@property (nonatomic) double buttonDownTime;

+ (long long)requestSourceForButtonIdentifier:(long long)a0;

- (long long)longPressBehavior;
- (id)eventSource;
- (id)init;
- (id)description;
- (double)buttonDownTimestamp;
- (void).cxx_destruct;
- (BOOL)isButtonRequest;
- (double)computedActivationTime;
- (id)initWithBluetoothKeyboardShortcutActivation:(long long)a0;
- (id)initWithBreadcrumbRequest;
- (id)initWithButtonIdentifier:(long long)a0 context:(id)a1;
- (id)initWithContinuityContext:(id)a0;
- (id)initWithDirectActionContext:(id)a0;
- (id)initWithRemotePresentationBringUpContext:(id)a0;
- (id)initWithSimpleActivation:(long long)a0;
- (id)initWithSpotlightContext:(id)a0;
- (id)initWithTestingContext:(id)a0;
- (id)initWithVoiceTriggerContext:(id)a0;
- (id)initWithVoiceTriggerRequest;
- (BOOL)isBluetoothRequest;
- (BOOL)isContinuityRequest;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isDirectActionRequest;
- (BOOL)isEyesFreeRequestSource;
- (BOOL)isHoldToTalkSource;
- (BOOL)isRemoteDisplayVoiceRequest;
- (BOOL)isRemotePresentationBringUpRequest;
- (BOOL)isSpotlightRequest;
- (BOOL)isTestingRequest;
- (BOOL)isUIFreeRequestSource;
- (BOOL)isVoiceRequest;

@end
