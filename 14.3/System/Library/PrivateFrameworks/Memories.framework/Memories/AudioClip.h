@interface AudioClip : KonaClip

@property (nonatomic) int cachedFadeIn;
@property (nonatomic) int cachedFadeOut;
@property (nonatomic) BOOL cachedFades;
@property (nonatomic) int audioType;
@property (nonatomic) BOOL startOffsetValidated;

+ (int)defaultAudioTypeForClipType:(int)a0;
+ (BOOL)audioEnabledByDefault;
+ (int)defaultClipTypeForAudioType:(int)a0;
+ (id)backgroundClip;
+ (id)soundEffectClip;

- (id)init;
- (id)valueForUndefinedKey:(id)a0;
- (int)startOffset;
- (void)setStartOffset:(int)a0;
- (id)themeID;
- (void)setDuration:(int)a0;
- (int)clipType;
- (BOOL)hasAudioCharacteristic;
- (void)setAudioFadeOutDuration:(int)a0;
- (void)setAudioFadeInDuration:(int)a0;
- (int)audioFadeInDuration;
- (int)audioFadeOutDuration;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)setThemeID:(id)a0;
- (BOOL)isBackgroundAudio;
- (void)validateFades;
- (id)asBackgroundAudioClip;
- (id)asForegroundAudioClip;

@end
