@class NSObject;
@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject {
    id _instanceObject;
    id /* block */ _setupBlock;
    id /* block */ _cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)instance;
- (void)dealloc;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (id)initWithSetupBlock:(id /* block */)a0 cleanupBlock:(id /* block */)a1 queue:(id)a2;
- (void)_receivedMemoryWarning:(id)a0;

@end
