@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject

@property long long categoryType;
@property (retain) NSArray *emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex;
@property (readonly, nonatomic, getter=name) NSString *name;
@property (readonly, getter=displaySymbol) NSString *displaySymbol;

+ (id)localizedStringForKey:(id)a0;
+ (id)categories;
+ (BOOL)isRTLMode;
+ (long long)numberOfCategories;
+ (id)emojiCategoryStringForCategoryType:(long long)a0;
+ (unsigned long long)hasVariantsForEmoji:(id)a0;
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)a0;
+ (unsigned long long)categoryIndexForCategoryType:(long long)a0;
+ (id)professionSkinToneEmojiBaseKey:(id)a0;
+ (id)emojiRecentsFromPreferences;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (long long)emojiCategoryTypeForCategoryString:(id)a0;
+ (id)fallbackDisplayName:(long long)a0;
+ (id)enabledCategoryIndexes;
+ (id)categoryForType:(long long)a0;
+ (id)displayName:(long long)a0;

- (void)dealloc;
- (void)releaseCategories;

@end
