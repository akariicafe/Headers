@class NSObject;
@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject {
    id _instanceObject;
    id /* block */ _setupBlock;
    id /* block */ _cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)instance;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)a0;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (id)initWithSetupBlock:(id /* block */)a0 cleanupBlock:(id /* block */)a1 queue:(id)a2;

@end
