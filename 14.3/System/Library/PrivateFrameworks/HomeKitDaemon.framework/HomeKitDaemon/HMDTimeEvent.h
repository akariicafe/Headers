@class NSString, NSSet, NSUUID, NSObject, HMDBackgroundTaskAgentTimer;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) BOOL repetitive;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (BOOL)isValidAbsoluteDateComponents:(id)a0;
+ (BOOL)isValidOffsetDateComponents:(id)a0;

- (void).cxx_destruct;
- (void)timerFired:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isActive;
- (void)encodeWithCoder:(id)a0;
- (void)_initialize;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithModel:(id)a0 home:(id)a1;
- (id)_nextTimerDate;
- (void)_updateRepetitive;
- (void)_reactivateTriggerAfterDelay;

@end
