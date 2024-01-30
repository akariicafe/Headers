@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) long long voiceType;
@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isDefault;
- (BOOL)isFallbackDefault;
- (BOOL)isSystemVoice;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)excludeInAvailableVoiceList;
- (BOOL)isCombinedFootprint;

@end
