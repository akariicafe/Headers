@interface SiriKitRuntime.ProxiedRequestContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ aceId;
    void /* unknown type, empty encoding */ refId;
    void /* unknown type, empty encoding */ interactionType;
    void /* unknown type, empty encoding */ inputOrigin;
    void /* unknown type, empty encoding */ aceMeCard;
    void /* unknown type, empty encoding */ sessionHandoffContinuityId;
    void /* unknown type, empty encoding */ isMultiUserEnabled;
    void /* unknown type, empty encoding */ requiresConditionalMultiUserGrounding;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ isDirectAction;
    void /* unknown type, empty encoding */ interactionId;
    void /* unknown type, empty encoding */ bargeInContext;
    void /* unknown type, empty encoding */ aceRemoteExecution;
    void /* unknown type, empty encoding */ resultCandidateId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
