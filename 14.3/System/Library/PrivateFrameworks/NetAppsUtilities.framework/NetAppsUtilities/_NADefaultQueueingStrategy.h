@class NSString;

@interface _NADefaultQueueingStrategy : NSObject <NAQueueingStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueObject:(id)a0 buffer:(id)a1;

@end
