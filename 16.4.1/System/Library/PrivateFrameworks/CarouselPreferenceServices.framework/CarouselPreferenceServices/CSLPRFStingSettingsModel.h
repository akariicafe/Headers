@class NSArray, NSDictionary, CSLPRFStingSettingsModelData, NSString, CSLPRFStingSystemSettings;

@interface CSLPRFStingSettingsModel : NSObject <CSLPRFTwoWaySyncSettingDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CSLPRFStingSystemSettings *_stingSystemSettings;
}

@property (retain, nonatomic) NSArray *defaultActionTypeItems;
@property (retain, nonatomic) NSDictionary *actionIdentifierToSupportedBundleIDsMap;
@property (retain, nonatomic) CSLPRFStingSettingsModelData *settingsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sfSymbolAssetNameForActionType:(unsigned long long)a0;
+ (id)actionNameForActionType:(unsigned long long)a0;
+ (id)alternateActionNameForActionType:(unsigned long long)a0;

- (void)_withLock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortcutItems;
- (id)_buildActionIdentifierToSupportedBundleIDsMap:(id)a0;
- (id)_buildDefaultActionTypeItems;
- (BOOL)_lock_isLinkActionSupportedForIdentifier:(id)a0;
- (void)_lock_rebuildModels;
- (id)_modelItemWithActionType:(unsigned long long)a0;
- (id)bundleIDsForActionType:(unsigned long long)a0;
- (id)defaultQuickActionItems;
- (id)quickActionItems;
- (void)rebuildModel;
- (id)startWorkoutsListForBundleID:(id)a0;
- (void)twoWaySyncSettingDidUpdate:(id)a0;

@end
