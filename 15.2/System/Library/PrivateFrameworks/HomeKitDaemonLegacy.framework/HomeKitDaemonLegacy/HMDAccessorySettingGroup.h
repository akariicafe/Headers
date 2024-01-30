@class NSUUID, NSString, NSArray, NSMutableSet;
@protocol HMDAccessorySettingGroupDataSource;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *parentIdentifier;
@property (weak) id<HMDAccessorySettingGroupDataSource> dataSource;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (weak) HMDAccessorySettingGroup *mediaSystemSettingGroup;
@property (readonly, copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;

- (void)addGroup:(id)a0;
- (id)fullDescription;
- (void)removeGroup:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)removeSetting:(id)a0;
- (id)settingWithName:(id)a0;
- (void)addSetting:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModel:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)settingWithIdentifier:(id)a0;
- (id)groupWithIdentifier:(id)a0;
- (id)settingWithKeyPath:(id)a0;
- (BOOL)compareSettingsTree:(id)a0;
- (void)intersectSettingGroup:(id)a0 groupMetadata:(id)a1 shouldAddMissingItems:(BOOL)a2;
- (id)copyReplica;
- (id)copyIdentical;
- (id)initWithName:(id)a0 identifier:(id)a1 parentIdentifier:(id)a2;
- (id)subGroupWithName:(id)a0;
- (id)_settingWithKeys:(id)a0;
- (BOOL)isPrivateToDevice;
- (void)_reevaluateParentGroup:(id)a0;
- (void)_setParentGroup:(id)a0;
- (BOOL)shouldEncodeForCoder:(id)a0;
- (BOOL)dataSourceShouldEncodeSetting:(id)a0 withCoder:(id)a1;

@end
