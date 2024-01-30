@class NSMutableDictionary;

@interface WFWorkflowRunQueue : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queueTable;

- (id)queueForDescriptor:(id)a0 createIfNeeded:(BOOL)a1;
- (id)description;
- (id)popRequestFromQueueWithType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)queueRequest:(id)a0 inQueue:(id)a1;

@end
