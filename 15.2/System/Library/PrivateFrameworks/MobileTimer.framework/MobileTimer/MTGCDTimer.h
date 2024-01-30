@class MTPowerAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;
- (void)startTimer:(double)a0 block:(id /* block */)a1;

@end
