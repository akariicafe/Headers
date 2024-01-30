@class NSDictionary;

@interface HMITask : HMFOperation

@property (copy) id /* block */ progressBlock;
@property (readonly) int taskID;
@property (readonly) NSDictionary *results;

- (void)main;
- (void).cxx_destruct;
- (id)initWithTaskID:(int)a0;
- (id)initWithTaskID:(int)a0 timeout:(double)a1;
- (void)mainInsideAutoreleasePool;

@end
