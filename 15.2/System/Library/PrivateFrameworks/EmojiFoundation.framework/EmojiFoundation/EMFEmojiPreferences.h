@class NSArray, NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {
    NSMutableDictionary *_defaults;
    BOOL _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;
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
+ (id)_recentEmojiStrings;
+ (id)differentialPrivacyDomain;
+ (id)_recentStringsInCharacterSet:(id)a0;
+ (id)_cacheDomain;
+ (id)differentialPrivacyRecorderForEmoji:(id)a0 usageMode:(id)a1;
+ (id)_allRecentStrings;
+ (id)_cachedFlagCategoryEmoji:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)didDisplaySkinToneHelp;
- (void)writeEmojiDefaults;
- (void)readEmojiDefaults;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (unsigned long long)previouslyUsedIndexInCategory:(id)a0;
- (BOOL)hasLastUsedVariantForEmoji:(id)a0;
- (id)lastUsedVariantEmojiForEmoji:(id)a0;
- (id)typingNameForEmoji:(id)a0;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)loadDefaultsIfNecessary;
- (id)recentsInCharacterSet:(id)a0;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;
- (void)_readPreferencesFromDefaults;
- (void)_pruneInvalidEmojiFromHistory;
- (void)_pruneOldestEmojiUsageFromHistory;
- (void)_checkForDingbatDuplicates;
- (void)_cleanUpOldFlagsCaches;
- (BOOL)shouldCountEmojiStringForUsageHistory:(id)a0;
- (double)scoreForSequence:(long long)a0;
- (double)scoreForEmojiString:(id)a0;
- (void)didUseEmoji:(id)a0;
- (void)resetEmojiDefaults;
- (void)migrateFromMajorOSVersion:(long long)a0;
- (void)migrateInRecentEmoji:(id)a0 usages:(id)a1 typingNames:(id)a2;
- (void)migrateInSkinTonePreferences:(id)a0;
- (void)migrateInPreviouslyUsedCategory:(id)a0;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)a0;
- (void)migrateInDidDisplaySkinToneHelp:(BOOL)a0;
- (id)recentVariantEmojiForEmoji:(id)a0;
- (void)_setRecentStrings:(id)a0;

@end
