@class NSString;
@protocol CNScheduler;

@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler>

@property (readonly, nonatomic) unsigned long long blockCounter;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)performCancelableBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)initWithScheduler:(id)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)nextBlockNumber;

@end
