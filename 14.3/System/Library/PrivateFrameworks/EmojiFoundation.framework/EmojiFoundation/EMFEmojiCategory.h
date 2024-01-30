@class NSString;

@interface EMFEmojiCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortLocalizedName;

+ (BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_isGenderEmoji:(id)a0;
+ (BOOL)_isNoneVariantEmoji:(id)a0;
+ (BOOL)_isDingbatsVariantEmoji:(id)a0;
+ (BOOL)_isSkinToneEmoji:(id)a0;
+ (BOOL)_isCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_isProfessionEmoji:(id)a0;
+ (id)_emojiSetForIdentifier:(id)a0;
+ (id)categoryWithIdentifier:(id)a0;
+ (id)localizedSkinToneEmojiDescription;
+ (id)PrepopulatedEmoji;
+ (id)PeopleEmoji;
+ (id)NatureEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)ActivityEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)ObjectsEmoji;
+ (id)SymbolsEmoji;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)extraFlagsForCountryCode:(id)a0;
+ (id)flagEmojiCountryCodesCommon;
+ (id)stringToRegionalIndicatorString:(id)a0;
+ (id)insertionFlagsForCountryCodes:(id)a0 inSortedCountryCodes:(id)a1;
+ (void)insertToSortedCountries:(id)a0 withAdditionalFlags:(id)a1;
+ (id)FlagsEmoji;
+ (id)_baseLocalizationKeyForIdentifier:(id)a0;
+ (id)DingbatsVariantEmoji;
+ (id)NoneVariantEmoji;
+ (id)SkinToneEmoji;
+ (id)GenderEmoji;
+ (id)ProfessionEmoji;
+ (id)CoupleMultiSkinToneEmoji;
+ (id)MultiPersonFamilySkinToneEmoji;
+ (id)NewlyAddedEmoji;
+ (id)categoryIdentifierList;
+ (id)localizedRecentsDescription;
+ (BOOL)_isFlagEmoji:(id)a0;
+ (BOOL)_isMultiPersonFamilySkinToneEmoji:(id)a0;
+ (BOOL)_isNewlyAddedEmoji:(id)a0;
+ (id)ProfessionWithoutSkinToneEmoji;
+ (id)CelebrationEmoji;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)emojiTokensForLocaleData:(id)a0;

@end
