@class NSString;

@interface SWPreventSystemSleepAssertion : NSObject <BSInvalidatable> {
    NSString *_identifier;
    unsigned int _lock_assertionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _lock_timeoutTime;
    unsigned long long _lock_state;
    BOOL _invalidated;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHighPriorityQueue;

- (void)acquireWithTimeout:(double)a0 handler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
