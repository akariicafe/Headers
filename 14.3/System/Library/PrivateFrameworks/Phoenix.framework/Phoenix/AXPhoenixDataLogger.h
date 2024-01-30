@class NSObject;
@protocol OS_dispatch_queue;

@interface AXPhoenixDataLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)logClassifierData:(id)a0 isDoubleTap:(BOOL)a1 startTime:(double)a2 endTime:(double)a3 completion:(id /* block */)a4;

@end
