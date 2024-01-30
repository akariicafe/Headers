@class NSObject, NSInvocation, UIWindowScene;
@protocol OS_dispatch_source;

@interface _UIDelayedPresentationContext : NSObject {
    BOOL _enableUserInteraction;
    long long _reqcnt;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSInvocation *presentInvocation;
@property (weak) UIWindowScene *windowSceneIgnoringEvents;

- (long long)requestCount;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delayingController;
- (id)initWithTimeout:(double)a0 cancellationHandler:(id /* block */)a1;
- (id)invocationTarget;

@end
