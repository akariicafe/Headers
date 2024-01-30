@class NSObject;
@protocol OS_dispatch_queue;

@interface NRBlockQueueWrapper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;

@end
