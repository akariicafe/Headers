@class NSString;

@interface MNSettings : NSObject <NSSecureCoding> {
    NSString *_voiceLanguage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long voiceVolume;
@property (readonly, nonatomic) unsigned long long distanceUnits;
@property (readonly, nonatomic) BOOL pauseSpokenAudio;
@property (readonly, nonatomic) BOOL muteSpeechOverride;
@property (readonly, nonatomic) BOOL speechEnabled;
@property (readonly, nonatomic) unsigned long long maxAlternateRoutesCount;
@property (readonly, nonatomic) BOOL beepBeforeInstruction;
@property (readonly, nonatomic) NSString *voiceLanguage;
@property (readonly, nonatomic) BOOL shouldUseGuidanceEventManager;

- (id)init;
- (void).cxx_destruct;
- (void)setVoiceLanguage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
