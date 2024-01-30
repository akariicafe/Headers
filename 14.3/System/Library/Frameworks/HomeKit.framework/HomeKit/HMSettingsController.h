@class NSUUID, NSString, HMSettings, NSDictionary, HMSettingGroup, HMSettingsMessageHandler, _HMContext, NSMapTable;
@protocol HMSettingsDelegate;

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner>

@property (retain) HMSettingsMessageHandler *messageHandler;
@property (retain) HMSettingGroup *rootGroup;
@property (retain) NSDictionary *encodedSettings;
@property (retain) NSMapTable *groupsMap;
@property (retain) NSMapTable *settingsMap;
@property (retain) _HMContext *context;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *codingKey;
@property (readonly) HMSettings *settings;
@property (weak) id<HMSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithParentIdentifier:(id)a0 codingKey:(id)a1 messageHandler:(id)a2 settingsCreator:(id)a3;
- (void)_updateSettingsWithBlock:(id /* block */)a0;
- (void)settingsDidChangeWithRootGroup:(id)a0 addedGroups:(id)a1 addedSettings:(id)a2 changedSettings:(id)a3;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHandler:(id /* block */)a0;
- (void)updateValueForSetting:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithParentIdentifier:(id)a0 codingKey:(id)a1;
- (id)settingForIdentifier:(id)a0;
- (id)settingGroupForIdentifier:(id)a0;
- (void)notifyDelegateOfUpdate;
- (void)mergeWith:(id)a0 settingsInitializedWasModified:(BOOL)a1;
- (void)configureWithContext:(id)a0;
- (id)logIdentifier;
- (void)decodeWithCoder:(id)a0;

@end
