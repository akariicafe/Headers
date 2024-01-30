@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _KSSystemTask : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria;
@property (readonly, nonatomic) unsigned long long periodSeconds;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ handler;
@property (nonatomic) double maxRunTime;
@property (nonatomic) double checkInTime;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 delay:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithName:(id)a0 isPeriodic:(BOOL)a1 period:(unsigned long long)a2 handler:(id /* block */)a3;

@end
