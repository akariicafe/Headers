@class NSUUID, HMFMessageDispatcher, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface HMMigrationBoost : HMFObject

@property (readonly, nonatomic) NSUUID *messageTarget;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleDaemonDisconnect:(id)a0;
- (id)initWithMessageTarget:(id)a0 notificationCenter:(id)a1 messageDispatcher:(id)a2 queue:(id)a3;
- (void)startBoost;
- (void)stopBoost;

@end
