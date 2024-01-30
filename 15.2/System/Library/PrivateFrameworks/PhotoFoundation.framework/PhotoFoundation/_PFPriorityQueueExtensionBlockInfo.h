@interface _PFPriorityQueueExtensionBlockInfo : NSObject

@property (readonly) id /* block */ block;
@property (readonly) unsigned int qos;
@property (readonly) unsigned long long priority;

- (void).cxx_destruct;
- (id)initWithPriority:(unsigned long long)a0 qos:(unsigned int)a1 block:(id /* block */)a2;

@end
