@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidated;
}

@property (readonly) double interval;

- (id)initWithTimeInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2 repeats:(BOOL)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
