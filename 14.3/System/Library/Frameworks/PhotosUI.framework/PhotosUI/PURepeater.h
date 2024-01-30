@class NSObject;
@protocol OS_dispatch_queue;

@interface PURepeater : NSObject {
    id /* block */ _block;
}

@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_fire;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;

@end
