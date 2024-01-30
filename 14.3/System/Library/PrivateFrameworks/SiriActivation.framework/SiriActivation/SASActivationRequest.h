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

- (id)eventSource;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (double)buttonDownTimestamp;
- (BOOL)isButtonRequest;
- (double)computedActivationTime;
- (BOOL)isDirectActionRequest;
- (BOOL)isBluetoothRequest;
- (BOOL)isContinuityRequest;
- (BOOL)isSpotlightRequest;
- (BOOL)isTestingRequest;
- (BOOL)isVoiceRequest;
- (id)initWithDirectActionEvent:(long long)a0 context:(id)a1;
- (id)initWithButtonIdentifier:(long long)a0 context:(id)a1;
- (id)initWithContinuityContext:(id)a0;
- (id)initWithVoiceTriggerContext:(id)a0;
- (id)initWithBreadcrumbRequest;
- (id)initWithSimpleActivation:(long long)a0;
- (id)initWithSpotlightContext:(id)a0;
- (id)initWithVoiceTriggerRequest;
- (id)initWithTestingContext:(id)a0;
- (BOOL)isUIFreeRequestSource;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isHoldToTalkSource;
- (BOOL)isEyesFreeRequestSource;

@end
