@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject

@property long long categoryType;
@property (retain) NSArray *emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex;
@property (readonly, nonatomic, getter=name) NSString *name;
@property (readonly, getter=displaySymbol) NSString *displaySymbol;

+ (id)categories;
+ (id)localizedStringForKey:(id)a0;
+ (BOOL)isRTLMode;
+ (id)professionSkinToneEmojiBaseKey:(id)a0;
+ (id)allowedCategoryIndexes;
+ (id)categoriesByType;
+ (id)categoryForType:(long long)a0;
+ (unsigned long long)categoryIndexForCategoryType:(long long)a0;
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)a0;
+ (id)displayName:(long long)a0;
+ (id)emojiCategoryStringForCategoryType:(long long)a0;
+ (long long)emojiCategoryTypeForCategoryString:(id)a0;
+ (id)emojiRecentsFromPreferences;
+ (id)enabledCategoryIndexes;
+ (id)fallbackDisplayName:(long long)a0;
+ (unsigned long long)hasVariantsForEmoji:(id)a0;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (long long)numberOfCategories;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseCategories;

@end
