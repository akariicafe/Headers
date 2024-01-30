@class NSString, NSMutableSet;
@protocol NAScheduler;

@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSMutableSet *eventNames;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } eventNamesLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallbackScheduler:(id)a0;
- (void)unscheduleActivities;
- (void)_withLock:(id /* block */)a0;
- (void)scheduleActivity:(id)a0 activityHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
