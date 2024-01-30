@interface FeatureManager : WBUFeatureManager {
    BOOL _customTabGroupsEnabled;
    BOOL _sectionHeadersDisabled;
}

@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable;
@property (readonly, nonatomic) BOOL iconsInTabsEnabled;
@property (readonly, nonatomic) BOOL isSimplifiedBookmarkingEnabled;
@property (nonatomic, getter=isUnifiedBarEnabled) BOOL unifiedBarEnabled;
@property (readonly, nonatomic, getter=isLoweredBarEnabled) BOOL loweredBarEnabled;
@property (readonly, nonatomic, getter=isMoreMenuEnabled) BOOL moreMenuEnabled;
@property (readonly, nonatomic, getter=isInsetGroupedCompletionListEnabled) BOOL insetGroupedCompletionListEnabled;
@property (readonly, nonatomic, getter=isTabGroupEnabled) BOOL tabGroupEnabled;
@property (readonly, nonatomic, getter=isCustomTabGroupsEnabled) BOOL customTabGroupsEnabled;
@property (readonly, nonatomic) BOOL isSystemNoteTakingEnabled;
@property (readonly, nonatomic, getter=isFloatingSidebarButtonEnabled) BOOL floatingSidebarButtonEnabled;
@property (readonly, nonatomic, getter=areTabGroupSuggestionsEnabled) BOOL tabGroupSuggestionsEnabled;

+ (id)sharedFeatureManager;

- (void)_updateAccessLevel;
- (BOOL)areSectionHeadersDisabled;
- (id)init;

@end
