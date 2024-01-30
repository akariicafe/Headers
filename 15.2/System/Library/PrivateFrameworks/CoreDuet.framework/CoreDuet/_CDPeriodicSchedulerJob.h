@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _CDPeriodicSchedulerJob : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (retain) NSObject<OS_xpc_object> *activity;
@property (readonly) long long period;
@property (readonly) double interval;
@property (readonly) NSString *jobName;
@property (readonly) id /* block */ handler;
@property (readonly) BOOL isHandlerAsynchronous;

+ (id)jobWithPeriod:(long long)a0 schedulerJobName:(id)a1 handler:(id /* block */)a2;
+ (id)jobWithInterval:(double)a0 schedulerJobName:(id)a1 queue:(id)a2 asynchronousHandler:(BOOL)a3 handler:(id /* block */)a4;
+ (id)jobWithInterval:(double)a0 schedulerJobName:(id)a1 handler:(id /* block */)a2;

- (id)initWithPeriod:(long long)a0 interval:(double)a1 schedulerJobName:(id)a2 queue:(id)a3 asynchronousHandler:(BOOL)a4 handler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)setExecutionCriteria:(id)a0;

@end
