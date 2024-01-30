@interface PFSerialQueue : PFDispatchQueue

+ (Class)concreteQueueClass;
+ (id)_newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;

@end
