@class NSString;

@interface HDXPCScheduler : NSObject

@property (copy, nonatomic) id /* block */ runBlock;
@property (readonly, copy, nonatomic) NSString *eventName;

+ (id)schedulerWithEventNamed:(id)a0 runBlock:(id /* block */)a1;

- (void)unschedule;
- (void)_dispatchBlock;
- (void)_checkIn;
- (void).cxx_destruct;
- (void)scheduleWithInterval:(double)a0 gracePeriod:(double)a1;
- (id)_identifierForEventName:(id)a0;
- (void)_registerWithCriteria:(id)a0;
- (id)_criteriaForInterval:(double)a0 gracePeriod:(double)a1;
- (id)_initWithEventNamed:(id)a0 runBlock:(id /* block */)a1;

@end
