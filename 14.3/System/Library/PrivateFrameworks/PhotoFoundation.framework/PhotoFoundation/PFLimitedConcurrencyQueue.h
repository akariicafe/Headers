@interface PFLimitedConcurrencyQueue : PFDispatchQueue

@property (readonly) unsigned long long concurrencyLimit;

+ (Class)concreteQueueClass;
+ (id)newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2 extensions:(id)a3;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1 qos:(unsigned int)a2;
+ (unsigned long long)defaultConcurrency;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1 qos:(unsigned int)a2 targetQueue:(id)a3 extensions:(id)a4;
+ (id)_newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;

@end
