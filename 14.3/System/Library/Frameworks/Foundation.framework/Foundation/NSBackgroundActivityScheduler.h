@class NSString;

@interface NSBackgroundActivityScheduler : NSObject {
    id _private1;
    id _private2;
    id _private3;
    long long _flags;
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

- (void)_updateCriteria:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)_updateCriteriaForCompletedActivity:(id)a0;
- (void)_setAdditionalXPCActivityProperties:(id)a0;
- (void)scheduleWithBlock:(id /* block */)a0;
- (void)invalidate;

@end
