@class NSObject;
@protocol OS_dispatch_source;

@interface CHDMonotonicTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

- (void)activateWithTime:(unsigned long long)a0 repeat:(long long)a1 block:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;

@end
