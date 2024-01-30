@class NSObject;
@protocol OS_dispatch_queue;

@interface PURepeater : NSObject {
    id /* block */ _block;
}

@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithBlock:(id /* block */)a0;
- (void)_fire;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
