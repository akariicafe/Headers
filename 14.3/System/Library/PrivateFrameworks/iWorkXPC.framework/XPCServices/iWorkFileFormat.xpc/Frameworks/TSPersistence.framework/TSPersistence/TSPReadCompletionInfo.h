@class NSMapTable, TSPFinalizeHandlerQueue;
@protocol TSPReadCoordinator;

@interface TSPReadCompletionInfo : NSObject

@property (readonly, nonatomic) NSMapTable *objects;
@property (readonly, nonatomic) id<TSPReadCoordinator> readCoordinator;
@property (readonly, nonatomic) TSPFinalizeHandlerQueue *finalizeHandlerQueue;

- (void).cxx_destruct;
- (id)initWithObjects:(id)a0 readCoordinator:(id)a1 finalizeHandlerQueue:(id)a2;

@end
