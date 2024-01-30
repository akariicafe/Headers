@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;
+ (id)main;

- (id)newTimer;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (void)runIdleHandlers;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)async:(id /* block */)a0;
- (void)assertInside;
- (void)unregisterForIdleNotifications:(id)a0;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (BOOL)shouldBeIdled;
- (void).cxx_destruct;
- (void)runResumeHandlers;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)suspend;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (id)debugDescription;
- (void)assertOutside;

@end
