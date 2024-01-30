@class NSString, NSObject, NSDate;
@protocol OS_xpc_object;

@interface FMXPCTimer : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData;

- (id)criteria;
- (void)handleActivity;
- (void)schedule;
- (void).cxx_destruct;
- (id /* block */)activityHandler;
- (id)initWithName:(id)a0 timeInterval:(double)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (id)initWithName:(id)a0 date:(id)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (id)initWithName:(id)a0 date:(id)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;
- (void)invalidate;
- (id)initWithName:(id)a0 timeInterval:(double)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;

@end
