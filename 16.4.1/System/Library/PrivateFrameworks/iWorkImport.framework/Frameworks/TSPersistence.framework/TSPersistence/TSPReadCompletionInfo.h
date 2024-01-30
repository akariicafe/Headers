@class NSArray, TSPFinalizeHandlerQueue;
@protocol TSPReadCoordinator;

@interface TSPReadCompletionInfo : NSObject {
    NSArray *_objects;
}

@property (readonly, nonatomic) id<TSPReadCoordinator> readCoordinator;
@property (readonly, nonatomic) TSPFinalizeHandlerQueue *finalizeHandlerQueue;

- (void).cxx_destruct;
- (id)initWithObjects:(id)a0 readCoordinator:(id)a1 finalizeHandlerQueue:(id)a2;
- (id)readObjectWithIdentifier:(long long)a0;

@end
