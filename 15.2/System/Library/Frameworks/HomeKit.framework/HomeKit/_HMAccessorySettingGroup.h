@class NSUUID, NSString, NSArray, _HMContext, HMAccessorySettings, NSObject, NSMutableSet, HMFUnfairLock;
@protocol _HMAccesorySettingGroupDelegate, OS_dispatch_queue;

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) id<_HMAccesorySettingGroupDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;

- (void)addGroup:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)removeGroup:(id)a0;
- (id)shortDescription;
- (id)clientQueue;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)removeSetting:(id)a0;
- (void)addSetting:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (id)messageDestination;
- (void)_unconfigureContext;
- (BOOL)mergeObject:(id)a0;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1;
- (void)resetSettings;
- (id)settingWithIdentifier:(id)a0;
- (void)notifyDelegateOfAddedSetting:(id)a0;
- (void)addSetting:(id)a0 toGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfRemovedSetting:(id)a0;
- (void)removeSetting:(id)a0 fromGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetGroups;
- (id)groupWithIdentifier:(id)a0;
- (void)notifyDelegateOfAddedGroup:(id)a0;
- (void)addGroup:(id)a0 toGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfRemovedGroup:(id)a0;
- (void)removeGroup:(id)a0 fromGroup:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)mergeSettings:(id)a0;
- (BOOL)mergeGroups:(id)a0;

@end
