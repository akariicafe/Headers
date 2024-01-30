@class NSOperationQueue, NSMutableDictionary;

@interface CDMServiceGraphRunner : NSObject {
    NSOperationQueue *_queue;
    NSMutableDictionary *_callbackMap;
    NSMutableDictionary *_operationMap;
    NSMutableDictionary *_handlerMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelAllHandlers;
- (id)initWithMaxConcurrentCount:(int)a0;
- (void)cancelHandlerById:(id)a0;
- (void)cancelHandlerById:(id)a0 causeByError:(BOOL)a1;
- (void)finishHandlerById:(id)a0;
- (id)getServiceGraphNodeQueue;
- (id)getOperationState:(id)a0;
- (void)runHandlerSync:(id)a0;
- (void)runHandlerAsync:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelHandler:(id)a0;
- (void)waitAll;
- (void)dumpServiceGraphNodeQueue;

@end
