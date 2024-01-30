@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDeviceControlRequestQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}

- (id)head;
- (void)enqueueRequest:(id)a0;
- (id)dequeue;
- (void)dealloc;
- (id)init;

@end
