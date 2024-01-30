@class NSString;

@interface WFXPCActivityScheduler : NSObject

@property (readonly, nonatomic) NSString *activityIdentifier;

+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 checkInHandler:(id /* block */)a1 runHandler:(id /* block */)a2;
+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 runHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithActivityIdentifier:(id)a0;
- (void)scheduleWithCheckInHandler:(id /* block */)a0 runHandler:(id /* block */)a1;
- (void)scheduleWithRunHandler:(id /* block */)a0;

@end
