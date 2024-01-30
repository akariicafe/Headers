@class NSObject;
@protocol OS_dispatch_queue;

@interface CHCWorkloop : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedDaemonWorkloop;

+ (id)serialQueueTargetingSharedWorkloop:(id)a0;
+ (id)serialQueueTargetingSharedWorkloop:(id)a0 withQoS:(unsigned int)a1;

@end
