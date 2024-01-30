@interface HMIEmptyTask : HMITask

@property (readonly) double duration;

- (id)initWithTaskID:(int)a0 duration:(double)a1;
- (void)mainInsideAutoreleasePool;

@end
