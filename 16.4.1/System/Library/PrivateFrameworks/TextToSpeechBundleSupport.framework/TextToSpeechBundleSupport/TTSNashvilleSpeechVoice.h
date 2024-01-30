@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (BOOL)isDefault;
- (BOOL)isFallbackDefault;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)excludeInAvailableVoiceList;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSystemVoice;
- (BOOL)isCombinedFootprint;

@end
