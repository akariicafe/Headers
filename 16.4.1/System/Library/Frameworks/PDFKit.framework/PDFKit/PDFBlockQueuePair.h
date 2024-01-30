@class NSObject;
@protocol OS_dispatch_queue;

@interface PDFBlockQueuePair : NSObject

@property (readonly) id /* block */ block;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)blockQueuePairWithBlock:(id /* block */)a0 andQueue:(id)a1;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 andQueue:(id)a1;

@end
