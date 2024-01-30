@class HDXPCAlarmScheduler, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDXPCAlarm : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HDXPCAlarmScheduler *scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ unitTest_schedulerObserver;
@property (readonly, copy, nonatomic) NSString *eventName;

- (id)initWithDaemon:(id)a0 eventName:(id)a1 eventHandlerQueue:(id)a2;
- (void)setNextFireDate:(id)a0 isUserVisible:(BOOL)a1;
- (void)beginReceivingEventsWithHandler:(id /* block */)a0;
- (void)unitTest_fireEventImmediatelyWithDate:(id)a0 isUserVisible:(BOOL)a1;
- (id)initWithProfile:(id)a0 eventName:(id)a1 eventHandlerQueue:(id)a2;
- (void)eventDidFire:(id)a0;
- (void)unschedule;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
