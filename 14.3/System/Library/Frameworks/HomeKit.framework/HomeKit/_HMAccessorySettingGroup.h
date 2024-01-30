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

+ (id)logCategory;
+ (id)supportedSettingsClasses;
+ (id)supportedGroupsClasses;
+ (id)shortDescription;

- (id)clientQueue;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void)removeSetting:(id)a0;
- (BOOL)mergeSettings:(id)a0;
- (BOOL)mergeGroups:(id)a0;
- (void).cxx_destruct;
- (void)removeGroup:(id)a0;
- (void)notifyDelegateOfAddedSetting:(id)a0;
- (void)notifyDelegateOfRemovedSetting:(id)a0;
- (void)notifyDelegateOfAddedGroup:(id)a0;
- (void)notifyDelegateOfRemovedGroup:(id)a0;
- (id)settingWithIdentifier:(id)a0;
- (void)addSetting:(id)a0 toGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSetting:(id)a0 fromGroup:(id)a1 completionHandler:(id /* block */)a2;
- (id)groupWithIdentifier:(id)a0;
- (void)addGroup:(id)a0 toGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeGroup:(id)a0 fromGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)addGroup:(id)a0;
- (void)addSetting:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1;
- (id)messageDestination;
- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
