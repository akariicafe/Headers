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

- (id)initWithName:(id)a0 date:(id)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (void)schedule;
- (id)criteria;
- (void)handleActivity;
- (id)initWithName:(id)a0 timeInterval:(double)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;
- (id /* block */)activityHandler;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 date:(id)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;
- (id)initWithName:(id)a0 timeInterval:(double)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;

@end
