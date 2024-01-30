@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidated;
}

@property (readonly) double interval;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2 repeats:(BOOL)a3;

@end
