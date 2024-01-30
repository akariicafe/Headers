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

+ (id)shortDescription;
+ (id)logCategory;
+ (id)otherAccessoryCategory;

- (id)shortDescription;
- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)lock;
- (id)dumpDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (void)dealloc;
- (void)_registerForMessages;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (void)associateWithAccessoryAdvertisement:(id)a0;
- (void)updateCategoryWithCategoryIdentifier:(id)a0;
- (void)_handleIdentify:(id)a0;

@end
