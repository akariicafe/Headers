@class NSString, NSArray, EMFEmojiLocaleData;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {
    BOOL _didFailCEM;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *_baseString;
@property (readonly, copy, nonatomic) NSArray *_skinToneVariantStrings;
@property (readonly, nonatomic) BOOL _shouldHighlightEmoji;
@property (readonly, nonatomic) struct __EmojiTokenWrapper { } *emojiTokenRef;
@property (readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property (readonly, nonatomic) BOOL supportsSkinToneVariants;
@property (readonly, nonatomic) int skinTone;
@property (readonly, nonatomic) NSArray *skinToneSpecifiers;
@property (readonly, nonatomic) NSArray *skinToneChooserVariants;
@property (readonly, copy, nonatomic) NSArray *skinToneVariants;
@property (readonly, nonatomic) int presentationStyle;
@property (readonly, nonatomic) BOOL isCommon;

+ (id)emojiTokenWithString:(id)a0 localeData:(id)a1;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray { } *)a0;
+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper { } *)a0;
+ (id)emojiTokenWithLongCharacter:(unsigned int)a0 localeData:(id)a1;

- (void).cxx_destruct;
- (id)copyWithSkinToneVariant:(int)a0;
- (id)copyWithSkinToneVariantSpecifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualIgnoringModifiers:(id)a0;
- (id)copyWithoutModifiers;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper { } *)a0;
- (id)initWithString:(id)a0 localeIdentifier:(id)a1;
- (void)_createEmojiTokenRefIfNecessary;
- (BOOL)supportsPresentationStyle:(int)a0;
- (id)copyWithPresentationStyle:(int)a0;
- (id)relatedEmojiTokens:(unsigned long long)a0;
- (id)nameForType:(int)a0;

@end
