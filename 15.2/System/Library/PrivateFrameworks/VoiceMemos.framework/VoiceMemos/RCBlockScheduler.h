@class NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;

@interface RCBlockScheduler : NSObject {
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _start;
    id /* block */ _schedulerBlock;
    BOOL _suspended;
}

@property (nonatomic) double interval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)scheduleBlock:(id /* block */)a0;

@end
