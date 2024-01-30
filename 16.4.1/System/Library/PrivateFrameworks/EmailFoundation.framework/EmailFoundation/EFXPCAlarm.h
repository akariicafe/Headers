@class NSString, EFXPCAlarmScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface EFXPCAlarm : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) EFXPCAlarmScheduler *scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ test_schedulerObserver;
@property (readonly, copy, nonatomic) NSString *eventName;

- (void)setNextFireDate:(id)a0 isUserVisible:(BOOL)a1;
- (void)beginReceivingEventsWithHandler:(id /* block */)a0;
- (id)initWithScheduler:(id)a0 eventName:(id)a1 eventHandlerQueue:(id)a2;
- (void)eventDidFire:(id)a0;
- (void)test_fireEventImmediatelyWithDate:(id)a0 isUserVisible:(BOOL)a1;
- (void)unschedule;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
