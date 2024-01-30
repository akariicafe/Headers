@class NSObject;
@protocol OS_dispatch_source;

@interface SYRetryTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _backoffFactor;
    int _maxRetries;
    int _numRetries;
}

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)incrementBackoff;
- (id)initWithInterval:(double)a0 backoffFactor:(double)a1 maxRetries:(int)a2 queue:(id)a3 callout:(id /* block */)a4;

@end
