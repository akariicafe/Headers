@class HMFMessageDispatcher, NSString, HMAccessoryCategory, HMDAccessoryAdvertisement, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, HMFLocking, NSSecureCoding> {
    id<HMFLocking> _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (copy, nonatomic) NSString *name;
@property (retain) HMAccessoryCategory *category;
@property (copy, setter=setUUID:) NSUUID *uuid;
@property (readonly, copy) NSString *identifier;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) long long associationOptions;
@property (readonly) unsigned long long transportTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)otherAccessoryCategory;

- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)lock;
- (id)init;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_registerForMessages;
- (id)messageDestination;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (id)dumpDescription;
- (void)associateWithAccessoryAdvertisement:(id)a0;
- (void)_handleIdentify:(id)a0;
- (void)updateCategoryWithCategoryIdentifier:(id)a0;

@end
