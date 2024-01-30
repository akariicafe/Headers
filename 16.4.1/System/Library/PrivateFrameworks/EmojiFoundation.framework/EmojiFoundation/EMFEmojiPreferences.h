@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {
    NSMutableDictionary *_defaults;
    BOOL _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
}

@property (nonatomic) unsigned long long maximumRecentsCount;
@property (readonly, nonatomic) NSArray *allRecents;
@property (readonly, nonatomic) NSArray *recentEmojis;
@property (readonly, nonatomic) NSString *previouslyUsedCategory;
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultsDomain;
+ (BOOL)deviceStateIsLocked;
+ (id)_recentEmojiStrings;
+ (id)_allRecentStrings;
+ (id)_cacheDomain;
+ (id)_cachedFlagCategoryEmoji:(id /* block */)a0;
+ (id)_recentStringsInCharacterSet:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (BOOL)hasLastUsedVariantForEmoji:(id)a0;
- (id)lastUsedVariantEmojiForEmoji:(id)a0;
- (unsigned long long)previouslyUsedIndexInCategory:(id)a0;
- (void)readEmojiDefaults;
- (id)typingNameForEmoji:(id)a0;
- (void)writeEmojiDefaults;
- (void)didUseEmoji:(id)a0;
- (void)_checkForDingbatDuplicates;
- (void)_cleanUpOldFlagsCaches;
- (void)_pruneInvalidEmojiFromHistory;
- (void)_pruneOldestEmojiUsageFromHistory;
- (void)_readPreferencesFromDefaults;
- (void)_setRecentStrings:(id)a0;
- (void)loadDefaultsIfNecessary;
- (void)migrateFromMajorOSVersion:(long long)a0;
- (void)migrateInDidDisplaySkinToneHelp:(BOOL)a0;
- (void)migrateInPreviouslyUsedCategory:(id)a0;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)a0;
- (void)migrateInRecentEmoji:(id)a0 usages:(id)a1 typingNames:(id)a2;
- (void)migrateInSkinTonePreferences:(id)a0;
- (id)recentVariantEmojiForEmoji:(id)a0;
- (id)recentsInCharacterSet:(id)a0;
- (void)resetEmojiDefaults;
- (double)scoreForEmojiString:(id)a0;
- (double)scoreForSequence:(long long)a0;
- (BOOL)shouldCountEmojiStringForUsageHistory:(id)a0;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;

@end
