@class NSString;
@protocol NAScheduler;

@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unschedule;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 callbackScheduler:(id)a1;
- (void)scheduleActivity:(id)a0 options:(unsigned long long)a1 activityHandler:(id /* block */)a2;
- (void)scheduleActivityWithCriteria:(id)a0 options:(unsigned long long)a1 activityHandler:(id /* block */)a2;

@end
