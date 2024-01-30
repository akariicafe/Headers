@class WBSAppleAccountInformationProvider;

@interface FeatureManager : WBUFeatureManager {
    WBSAppleAccountInformationProvider *_accountInformationProvider;
    BOOL _cloudAccountIsHSA2;
    BOOL _isCloudSyncEnabled;
}

@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable;
@property (readonly, nonatomic, getter=isCustomTabGroupsEnabled) BOOL customTabGroupsEnabled;
@property (readonly, nonatomic) BOOL isSystemNoteTakingEnabled;
@property (readonly, nonatomic, getter=isFloatingSidebarButtonEnabled) BOOL floatingSidebarButtonEnabled;
@property (readonly, nonatomic, getter=isTabGroupButtonEnabled) BOOL tabGroupButtonEnabled;
@property (readonly, nonatomic, getter=areTabGroupSuggestionsEnabled) BOOL tabGroupSuggestionsEnabled;
@property (readonly, nonatomic, getter=areSharedTabGroupsEnabled) BOOL sharedTabGroupsEnabled;

+ (id)sharedFeatureManager;

- (void)_accountsDidChange;
- (void)_updateAccessLevel;
- (BOOL)isCloudAccountHSA2;
- (id)init;
- (BOOL)_isSafariSyncEnabled;
- (void).cxx_destruct;

@end
