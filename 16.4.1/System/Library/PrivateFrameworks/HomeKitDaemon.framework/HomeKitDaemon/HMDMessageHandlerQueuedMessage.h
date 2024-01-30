@class HMFTimer, NSUUID, NSString, HMFMessage;
@protocol HMDMessageHandlerQueuedMessageDelegate;

@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate>

@property (readonly) HMFTimer *timer;
@property (weak) id<HMDMessageHandlerQueuedMessageDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)privateDescription;
- (id)initWithMessage:(id)a0;
- (void)resumeTimer;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 timeInterval:(double)a1;
- (void)suspendTimer;

@end
