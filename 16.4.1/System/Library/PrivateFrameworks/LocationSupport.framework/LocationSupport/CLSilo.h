@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)main;
+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;

- (BOOL)isSuspended;
- (void)unregisterForIdleNotifications:(id)a0;
- (BOOL)shouldBeIdled;
- (void)runResumeHandlers;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)runIdleHandlers;
- (id)debugDescription;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)sync:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (void).cxx_destruct;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)resume;
- (void)intendToSync;

@end
