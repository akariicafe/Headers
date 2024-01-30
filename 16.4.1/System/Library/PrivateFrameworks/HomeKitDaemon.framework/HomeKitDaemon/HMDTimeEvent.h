@class NSString, NSSet, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) NSString *timerID;
@property (readonly, nonatomic) BOOL repetitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isValidAbsoluteDateComponents:(id)a0;
+ (BOOL)isValidOffsetDateComponents:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (BOOL)isActive;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_nextTimerDate;
- (void)_reactivateTriggerAfterDelay;
- (void)_updateRepetitive;
- (void)handleTimerFiredNotification:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;

@end
