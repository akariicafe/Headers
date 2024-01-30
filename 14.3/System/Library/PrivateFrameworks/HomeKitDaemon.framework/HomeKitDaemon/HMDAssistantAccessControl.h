@class NSMutableSet, NSUUID, HMDAssistantAccessControlModel, HMDUser, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol> {
    id<HMFLocking> _lock;
    NSMutableSet *_accessories;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long cachedHash;
@property (readonly, copy) NSUUID *modelID;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property unsigned long long options;
@property (weak) HMDUser *user;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly, copy) NSArray *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (BOOL)isAccessorySupported:(id)a0;
+ (id)modelIDNamespace;
+ (id)accessControlWithMessage:(id)a0 user:(id)a1 error:(id *)a2;

- (id)initWithUser:(id)a0;
- (void)configure;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAccessory:(id)a0;
- (void)addAccessory:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAccessories:(id)a0;
- (id)logIdentifier;
- (void)setEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (void)handleRemovedAccessory:(id)a0;
- (id)initWithUser:(id)a0 model:(id)a1;
- (id)assistantAccessControlModelWithRemovedAccessories:(id)a0;
- (id)initWithUser:(id)a0 accessories:(id)a1 enabled:(BOOL)a2;
- (void)removeAccessoriesAddedByOldController:(id)a0;
- (void)notifyClientOfUpdateWithMessage:(id)a0;

@end
