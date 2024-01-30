@class HMUser, HMSettingGroup, _HMContext, HMSettings, NSString;
@protocol HMSettingsDelegate;

@interface HMUserSettingsAdapter : HMFObject <HMSettingManager, HMSettingsOwner, HMFLogging>

@property (weak, nonatomic) HMUser *user;
@property (retain, nonatomic) _HMContext *context;
@property (retain) HMSettingGroup *rootGroup;
@property (nonatomic) long long type;
@property (nonatomic) BOOL didEverSentOutSettingsDidUpdate;
@property (readonly) HMSettings *settings;
@property (weak) id<HMSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)privateSettingsSchema;
+ (id)sharedSettingsSchema;

- (void).cxx_destruct;
- (void)_notifyDelegateDidUpdateKeyPath:(id)a0;
- (void)_notifyDelegateSettingsDidUpdate;
- (id)appendKeyPath:(id)a0 withNextKey:(id)a1;
- (void)configureWithContext:(id)a0;
- (id)createKeyPathArrayWithKeyPath:(id)a0;
- (void)createRootSettingGroup;
- (id)findOrAddUserSettingGroupWithKeyPath:(id)a0;
- (id)groupKeyArrayFromKeyPath:(id)a0;
- (id)initWithUser:(id)a0 settingsType:(long long)a1;
- (BOOL)mergeUsingPreOrder:(id)a0 withDictionary:(id)a1;
- (void)mergeWithDictionary:(id)a0;
- (id)settingKeyFromKeyPath:(id)a0;
- (void)updateValueForSetting:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
