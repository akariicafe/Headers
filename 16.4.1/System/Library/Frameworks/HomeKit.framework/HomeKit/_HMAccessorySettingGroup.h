@class NSMutableSet, NSUUID, _HMContext, NSString, NSArray, HMAccessorySettings, NSObject;
@protocol _HMAccesorySettingGroupDelegate, OS_dispatch_queue;

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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

- (id)clientQueue;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void)_unconfigure;
- (id)init;
- (void).cxx_destruct;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (void)notifyDelegateOfRemovedSetting:(id)a0;
- (void)_unconfigureContext;
- (void)addSetting:(id)a0;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (BOOL)mergeGroups:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (BOOL)mergeSettings:(id)a0;
- (void)notifyDelegateOfAddedGroup:(id)a0;
- (void)notifyDelegateOfAddedSetting:(id)a0;
- (void)notifyDelegateOfRemovedGroup:(id)a0;
- (void)removeSetting:(id)a0;
- (void)resetGroups;
- (void)resetSettings;

@end
