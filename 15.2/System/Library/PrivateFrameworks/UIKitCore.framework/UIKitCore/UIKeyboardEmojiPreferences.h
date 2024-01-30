@class EMFEmojiPreferencesClient, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UIKeyboardEmojiPreferences : NSObject {
    EMFEmojiPreferencesClient *_preferencesClient;
    NSObject<OS_dispatch_queue> *_clientDispatchQueue;
    NSArray *_localRecentsWithClient;
    NSArray *_localRecentsWithoutClient;
}

@property (readonly, nonatomic) EMFEmojiPreferencesClient *preferencesClient;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
@property (nonatomic) long long selectedCategoryType;
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;

+ (id)sharedInstance;

- (void)emojiUsed:(id)a0;
- (id)init;
- (void)handleRead:(id)a0;
- (long long)emojiCategoryDefaultsIndex:(id)a0;
- (void)handleWrite:(id)a0;
- (void)clearEmojiKeyboardPreferenceClient;
- (void)didDisplaySkinToneHelp;
- (BOOL)hasLastUsedVariantForEmojiString:(id)a0;
- (void)updateSkinToneBaseKey:(id)a0 variantUsed:(id)a1;
- (void)dealloc;
- (void)emojiUsed:(id)a0 language:(id)a1;
- (id)recentEmojiAtIndex:(long long)a0 size:(unsigned long long *)a1;
- (id)emojiWithoutDuplicateRecents:(id)a0;
- (id)lastUsedVariantEmojiForEmojiString:(id)a0;
- (void)handleSuspend:(id)a0;
- (void)refreshLocalRecents;
- (void)writeEmojiDefaults;
- (void)setEmojiCategoryDefaultsIndex:(long long)a0 forCategory:(id)a1;
- (void)readEmojiDefaults;
- (void)clearLocalRecentsCache;
- (void)emojiUsed:(id)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)_usageForEmoji:(id)a0 language:(id)a1 mode:(id)a2 typingName:(id)a3;
- (id)typingNameForEmoji:(id)a0 language:(id)a1;
- (void)emojiPredicted:(id)a0 typingName:(id)a1 language:(id)a2;

@end
