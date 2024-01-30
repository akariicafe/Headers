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

- (long long)requestCount;
- (void).cxx_destruct;
- (id)delayingController;
- (id)invocationTarget;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (id)initWithTimeout:(double)a0 cancellationHandler:(id /* block */)a1;

@end
