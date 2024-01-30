@class NSObject, NSOperationQueue, FPDServer;
@protocol OS_dispatch_queue;

@interface FPDActionOperationEngine : NSObject {
    FPDServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

- (id)initWithServer:(id)a0;
- (id)inFlightOperations;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleActionOperationWithInfo:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)dumpStateTo:(id)a0;

@end
