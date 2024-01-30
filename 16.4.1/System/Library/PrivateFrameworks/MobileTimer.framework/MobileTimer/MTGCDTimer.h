@class MTPowerAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

- (void)dealloc;
- (void)cancelTimer;
- (void).cxx_destruct;
- (void)startTimer:(double)a0 block:(id /* block */)a1;

@end
