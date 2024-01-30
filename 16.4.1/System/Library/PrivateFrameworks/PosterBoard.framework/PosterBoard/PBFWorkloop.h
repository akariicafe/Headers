@class NSObject;
@protocol OS_dispatch_workloop;

@interface PBFWorkloop : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *sharedDaemonWorkloop;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *snapshottingWorkloop;

+ (id)serialQueueTargetingSharedWorkloop:(id)a0;
+ (id)serialQueueTargetingSharedWorkloop:(id)a0 withQoS:(unsigned int)a1;

@end
