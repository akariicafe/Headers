@class UIKeyboardEmojiKeyView, UIKeyboardEmojiCategory, NSString;

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate> {
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

@property (retain, nonatomic) UIKeyboardEmojiKeyView *inputView;
@property (retain, nonatomic) UIKeyboardEmojiKeyView *categoryView;
@property (weak) UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForCategoryControl:(long long)a0;
+ (Class)classForInputView:(long long)a0;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (void)dealloc;
- (id)recents;
- (id)init;
- (void).cxx_destruct;
- (void)emojiUsed:(id)a0;
- (void)emojiUsed:(id)a0 language:(id)a1;
- (id)emojiWithoutDuplicateRecents:(id)a0;
- (BOOL)hasLastUsedVariantForEmojiString:(id)a0;
- (id)lastUsedVariantEmojiForEmojiString:(id)a0;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)a0;
- (id)recentEmojiAtIndex:(long long)a0 size:(unsigned long long *)a1;
- (long long)reloadCategoryForOffsetPercentage:(double)a0 withSender:(id)a1;
- (void)reloadForCategory:(long long)a0 withSender:(id)a1;
- (id)skinToneBaseKeyPreferences;
- (void)updateEmojiKeyManagerWithKey:(id)a0 withKeyView:(id)a1;
- (void)updateSkinToneBaseKey:(id)a0 variantUsed:(id)a1;
- (BOOL)userHasSelectedSkinToneEmoji;

@end
