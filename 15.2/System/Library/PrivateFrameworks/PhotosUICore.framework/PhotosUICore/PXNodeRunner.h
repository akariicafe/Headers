@class NSOperationQueue;

@interface PXNodeRunner : NSObject {
    NSOperationQueue *_operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (void).cxx_destruct;
- (id)init;
- (void)processGraphForRunNode:(id)a0;
- (void)_processRunGraph:(id)a0;

@end
