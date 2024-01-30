@class NSInvocation, NSObject;
@protocol OS_dispatch_source;

@interface _UIDelayedPresentationContext : NSObject {
    BOOL _enableUserInteraction;
    long long _reqcnt;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSInvocation *presentInvocation;

- (void).cxx_destruct;
- (id)invocationTarget;
- (long long)requestCount;
- (id)delayingController;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (id)initWithTimeout:(double)a0 cancellationHandler:(id /* block */)a1;

@end
