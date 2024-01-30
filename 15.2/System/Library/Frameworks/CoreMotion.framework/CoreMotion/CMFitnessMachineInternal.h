@class NSObject;
@protocol OS_dispatch_queue;

@interface CMFitnessMachineInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)_feedFitnessMachineData:(id)a0;
- (id)init;
- (void)_teardown;
- (void)dealloc;

@end
