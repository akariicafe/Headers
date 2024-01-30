@class APLatencyVisualizationLayer, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface APLatencyVisualizationTrackingController : NSObject {
    APLatencyVisualizationLayer *_layer;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init:(id)a0;
- (void)draw;
- (void)dealloc;
- (id)layer;

@end
