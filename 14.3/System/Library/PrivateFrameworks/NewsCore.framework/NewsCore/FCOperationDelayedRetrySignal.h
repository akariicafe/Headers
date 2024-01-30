@class NSString;

@interface FCOperationDelayedRetrySignal : NSObject <FCOperationRetrySignal> {
    unsigned long long _signalTime;
    double _delay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onQueue:(id)a0 signal:(id /* block */)a1;
- (id)initWithDelay:(double)a0;

@end
