@class EMFEmojiPreferencesClient, EMFEmojiLocaleData, NSArray;

@interface _EAREmojiRecognition : NSObject {
    EMFEmojiPreferencesClient *_preferences;
    EMFEmojiLocaleData *_localeData;
    NSArray *_frequentEmojis;
    struct __EmojiLocaleDataWrapper { } *_cemlocaleRef;
}

@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed;
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed;

+ (void)initialize;

- (void)dealloc;
- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;
- (id)_frequentEmojiBaseStrings;
- (id)baseStringForEmojiString:(id)a0;
- (void)didUseEmoji:(id)a0;
- (id)formatEmojiStrings:(id)a0;
- (id)formatEmojiStrings:(id)a0 isLogging:(BOOL)a1;
- (BOOL)isEmojiRecognitionCapable;
- (BOOL)isValidEmoji:(id)a0;
- (void)resetEmojiMetrics;
- (void)resetEmojiPreferences;
- (id)searchEmojiAlternativesForSpokenEmoji:(id)a0 count:(long long)a1 emojiCharacter:(id)a2;

@end
