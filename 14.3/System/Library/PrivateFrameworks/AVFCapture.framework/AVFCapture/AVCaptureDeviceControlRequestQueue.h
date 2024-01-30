@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDeviceControlRequestQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}

- (id)init;
- (id)dequeue;
- (void)dealloc;
- (void)enqueueRequest:(id)a0;
- (id)head;

@end
