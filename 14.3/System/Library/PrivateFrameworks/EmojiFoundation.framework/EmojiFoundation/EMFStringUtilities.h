@interface EMFStringUtilities : NSObject

+ (id)professionSkinToneEmojiBaseKey:(id)a0;
+ (id)_baseStringForEmojiString:(id)a0;
+ (id)_skinToneChooserVariantsForString:(id)a0;
+ (id)_skinToneSpecifiersForString:(id)a0;
+ (id)_multiPersonStringForString:(id)a0 skinToneVariantSpecifier:(id)a1;
+ (id)_stringWithUnichar:(unsigned int)a0;
+ (id)_preferenceIndexString:(id)a0;
+ (BOOL)_isNewlyAddedEmoji:(id)a0;
+ (BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)a0;
+ (BOOL)_hasSkinToneVariantsForString:(id)a0;
+ (int)_skinToneForString:(id)a0;
+ (id)_skinToneVariantsForString:(id)a0;
+ (int)_skinToneModifierFromSpecifierType:(id)a0;
+ (unsigned int)_firstLongCharacterOfString:(id)a0;
+ (BOOL)_emojiString:(id)a0 containsSubstring:(id)a1;
+ (long long)multiPersonTypeForString:(id)a0;
+ (id)_baseFirstCharacterString:(id)a0;
+ (id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)a0;
+ (id)_tokenizedMultiPersonFromString:(id)a0;
+ (id)_skinToneChooserVariantsForMultiPersonType:(long long)a0;
+ (id)_skinToneVariantsForMultiPersonType:(long long)a0;
+ (id)_skinToneSuffixFromSpecifierType:(id)a0;

@end
