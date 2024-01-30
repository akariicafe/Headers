@class NSArray, NSMapTable, HMDSettingGroup, NSString;
@protocol HMDSettingsControllerDelegate, HMDSettingsMessageHandlerProtocol, HMDSettingsControllerDependency;

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HMDSettingsMessageHandlerProtocol> messageHandler;
@property (readonly) id<HMDSettingsControllerDependency> dependency;
@property (readonly, weak) id<HMDSettingsControllerDelegate> delegate;
@property (retain) HMDSettingGroup *rootGroup;
@property BOOL isInitialized;
@property (retain) NSMapTable *groupsMap;
@property (retain) NSMapTable *settingsMap;
@property (readonly) NSArray *allObjectIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;

- (void)configure;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)settingGroupForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)settingForIdentifier:(id)a0;
- (id)settingForKeyPath:(id)a0;
- (void)transactionSettingConstraintModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)transactionSettingModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)transactionSettingGroupModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)updateWithEncodedValue:(id)a0 onSettingIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)transactionSettingGroupModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)transactionSettingModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)transactionSettingConstraintModelRemoved:(id)a0 completion:(id /* block */)a1;
- (id)migrateSettingsTransactionWithTransaction:(id)a0 error:(id *)a1;
- (id)modelsToMakeSettings;
- (void)loadWithModels:(id)a0;
- (void)updateWithValue:(id)a0 onSetting:(id)a1 completion:(id /* block */)a2;
- (id)settingValuesByKeyPathWithPrefix:(id)a0;
- (id)initWithDependency:(id)a0 delegate:(id)a1;
- (void)updateWithValue:(id)a0 onSettingIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_handleAddedRootGroup:(id)a0;
- (void)handleAddedGroupModel:(id)a0 completion:(id /* block */)a1;
- (void)handleAddedGroupModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAddedGroupModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleAddedSettingModel:(id)a0 completion:(id /* block */)a1;
- (void)handleAddedSettingModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAddedSettingModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (id)_flattenedSettingControllerRoot:(id)a0 withCurrentPath:(id)a1 andReturnDictionary:(id)a2;
- (void)handleAddedConstraintModel:(id)a0 completion:(id /* block */)a1;
- (void)handleAddedConstraintModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAddedConstraintModel:(id)a0 shouldNotify:(BOOL)a1 completion:(id /* block */)a2;
- (void)resetupMessageHandlersWithAddedGroups:(id)a0 removedGroups:(id)a1 addedSettings:(id)a2 removedSettings:(id)a3;
- (void)settingsHierarchyDidChange;
- (void)updateRootGroup:(id)a0;
- (void)_updateRootGroup:(id)a0;
- (id)modelsToMigrateSettings;
- (id)keyPathsInModels:(id)a0;
- (id)_keyPathsToModelInModelIDToModelLookup:(id)a0 parentIDToModelIDsLookup:(id)a1 currentID:(id)a2 currentPath:(id)a3;
- (id)keyPathsInExistingSettings;
- (id)_keyPathsFromGroup:(id)a0 currentPath:(id)a1;
- (void)updateParentsInKeyPathToModel:(id)a0 usingKeyPathToSetting:(id)a1;
- (id)_prunedSettingsGroupByRemovingKeyPathsFromGroup:(id)a0;

@end
