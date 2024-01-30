@class NSObject;
@protocol OS_dispatch_source;

@interface MSVTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)timerWithInterval:(double)a0 block:(id /* block */)a1;
+ (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;
+ (id)timerWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;

- (id)initWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
