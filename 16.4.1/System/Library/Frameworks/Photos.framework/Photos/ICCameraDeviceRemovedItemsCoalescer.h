@class NSMutableArray, NSDate, PHImportDeviceSource, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    PHImportDeviceSource *_source;
    NSMutableArray *_items;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)coalesceItems:(id)a0;
- (id)initWithSource:(id)a0 block:(id /* block */)a1;

@end
