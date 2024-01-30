@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) long long voiceType;
@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDefault;
- (BOOL)isFallbackDefault;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSystemVoice;
- (BOOL)excludeInAvailableVoiceList;
- (BOOL)isCombinedFootprint;

@end
