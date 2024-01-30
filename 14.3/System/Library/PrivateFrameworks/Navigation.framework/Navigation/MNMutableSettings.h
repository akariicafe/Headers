@class NSString;

@interface MNMutableSettings : MNSettings

@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL muteSpeechOverride;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) BOOL beepBeforeInstruction;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) BOOL shouldUseGuidanceEventManager;

+ (id)settingsWithSettings:(id)a0;

- (void)setBeepBeforeInstruction:(BOOL)a0;
- (void)setShouldUseGuidanceEventManager:(BOOL)a0;
- (void)setVoiceLanguage:(id)a0;
- (void)setDistanceUnits:(unsigned long long)a0;
- (void)setMaxAlternateRoutesCount:(unsigned long long)a0;
- (void)setSpeechEnabled:(BOOL)a0;
- (void)setVoiceVolume:(unsigned long long)a0;
- (void)setPauseSpokenAudio:(BOOL)a0;
- (void)setMuteSpeechOverride:(BOOL)a0;

@end
