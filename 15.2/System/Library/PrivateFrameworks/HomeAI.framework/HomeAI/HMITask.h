@class NSDictionary;

@interface HMITask : HMFOperation

@property (readonly) int taskID;
@property (readonly) NSDictionary *results;

- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)initWithTaskID:(int)a0 timeout:(double)a1;
- (id)initWithTaskID:(int)a0;

@end
