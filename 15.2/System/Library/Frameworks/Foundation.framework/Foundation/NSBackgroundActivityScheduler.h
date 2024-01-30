@class NSString;

@interface NSBackgroundActivityScheduler : NSObject {
    id _private1;
    id _private2;
    id _private3;
    long long _flags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidateLock;
}

@property (getter=isPreregistered) BOOL preregistered;
@property double delay;
@property id /* block */ checkInHandler;
@property (getter=_isAppRefresh) BOOL _appRefresh;
@property (readonly, copy) NSString *identifier;
@property long long qualityOfService;
@property BOOL repeats;
@property double interval;
@property double tolerance;
@property (readonly) BOOL shouldDefer;

- (id)initWithIdentifier:(id)a0;
- (void)_updateCriteriaForCompletedActivity:(id)a0;
- (void)_setAdditionalXPCActivityProperties:(id)a0;
- (id)init;
- (void)invalidate;
- (void)_updateCriteria:(id)a0;
- (void)scheduleWithBlock:(id /* block */)a0;
- (void)dealloc;

@end
