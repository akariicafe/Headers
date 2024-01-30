@class PHImportDeviceSource, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    NSMutableArray *_items;
    PHImportDeviceSource *_source;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 block:(id /* block */)a1;
- (void)coalesceItems:(id)a0;

@end
