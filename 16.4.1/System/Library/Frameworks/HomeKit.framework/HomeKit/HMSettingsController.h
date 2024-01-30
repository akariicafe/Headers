@class NSUUID, NSString, HMSettings, NSDictionary, HMSettingGroup, HMSettingsMessageHandler, _HMContext, NSMapTable;
@protocol HMSettingsDelegate;

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMSettingGroup *_rootGroup;
    id<HMSettingsDelegate> _delegate;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}

@property (retain) HMSettingsMessageHandler *messageHandler;
@property (retain) NSDictionary *encodedSettings;
@property (retain) _HMContext *context;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *codingKey;
@property (readonly) HMSettings *settings;
@property (weak) id<HMSettingsDelegate> delegate;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)decodeWithCoder:(id)a0;
- (void)__notifyDelegateDidUpdateKeyPath:(id)a0;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)configureWithContext:(id)a0;
- (BOOL)hasSettingGroups;
- (BOOL)hasSettings;
- (id)initWithParentIdentifier:(id)a0 codingKey:(id)a1 messageHandler:(id)a2 settingsCreator:(id)a3;
- (id)initWithParentIdentifier:(id)a0 homeUUID:(id)a1 codingKey:(id)a2;
- (void)mergeWith:(id)a0 settingsInitializedWasModified:(BOOL)a1;
- (void)notifyDelegateOfUpdate;
- (void)setRootGroup:(id)a0;
- (void)setSetting:(id)a0 withGroupKeyPath:(id)a1;
- (void)setSettingGroup:(id)a0 withParentGroupKeyPath:(id)a1;
- (id)settingForKeyPath:(id)a0;
- (id)settingGroupForKeyPath:(id)a0;
- (void)updateValueForSetting:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
