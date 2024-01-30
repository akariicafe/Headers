@interface BLSSharedWorkloop : NSObject

+ (id)workloop;
+ (void)dispatchWithQOSClass:(unsigned int)a0 block:(id /* block */)a1;
+ (id)serialQueueWithQOSClass:(unsigned int)a0 label:(const char *)a1;

@end
