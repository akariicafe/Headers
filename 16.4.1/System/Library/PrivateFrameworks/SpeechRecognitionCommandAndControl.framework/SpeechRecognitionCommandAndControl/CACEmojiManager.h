@class EMFEmojiPreferences, EMFEmojiLocaleData, NSString;

@interface CACEmojiManager : NSObject

@property (retain, nonatomic) EMFEmojiLocaleData *emojiLocaleData;
@property (retain, nonatomic) EMFEmojiPreferences *emojiPreferences;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;

+ (id)sharedManager;
+ (void)resetSharedManager;

- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmoji:(id)a0;
- (long long)countOfEmojisInString:(id)a0;
- (id)emojiStringsFromEmojiTokens:(id)a0 skinToneFilter:(int)a1;
- (id)emojiTokenUsingPrefixApproachForText:(id)a0 skinToneFilter:(int)a1;
- (id)emojisForText:(id)a0 skinToneFilter:(int)a1;
- (void)enumerateEmojisInText:(id)a0 skinToneFilter:(int)a1 usingBlock:(id /* block */)a2;
- (id)relatedEmojisForEmoji:(id)a0 skinToneFilter:(int)a1;
- (id)stringByReplacingEmojisWithDescriptions:(id)a0;
- (void)willInsertStringPotentiallyContainingEmojis:(id)a0;

@end
