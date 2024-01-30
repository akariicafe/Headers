@class NSUUID, _HMContext, NSString, HMEventTrigger, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isEndEvent) BOOL endEvent;
@property (readonly, nonatomic) NSString *triggerType;
@property (weak, nonatomic) HMEventTrigger *eventTrigger;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (BOOL)sharedTriggerActivationSupportedForHome:(id)a0;
+ (BOOL)isSupportedForHome:(id)a0;

- (id)init;
- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (id)initWithCoder:(id)a0;
- (void)_updateTriggerType;
- (BOOL)isEqual:(id)a0;
- (void)_registerNotificationHandlers;
- (void)encodeWithCoder:(id)a0;

@end
