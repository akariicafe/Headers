@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCPTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    _Atomic BOOL _active;
    BOOL _isOneShot;
    id /* block */ _block;
}

+ (id)timerWithIntervalSeconds:(unsigned long long)a0 isOneShot:(BOOL)a1 andBlock:(id /* block */)a2;
+ (id)timerWithInterval:(unsigned long long)a0 unit:(unsigned long long)a1 oneShot:(BOOL)a2 andBlock:(id /* block */)a3;

- (id)initWithIntervalNanoseconds:(unsigned long long)a0 isOneShot:(BOOL)a1 andBlock:(id /* block */)a2;
- (void)handleTimerEvent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroy;

@end
