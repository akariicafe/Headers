@interface QLMemoryLimitedQueueTask : NSObject

@property (readonly) unsigned long long expectedMemoryConsumption;
@property (readonly) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 expectedMemoryConsumption:(unsigned long long)a1;

@end
