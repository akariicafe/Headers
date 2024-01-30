@interface AVTTransitionSchedulerFactory : NSObject

+ (id)synchronousTransitionSchedulerWithEventHandler:(id /* block */)a0;
+ (id)concurrentTransitionSchedulerWithEventHandler:(id /* block */)a0 delay:(double)a1;

@end
