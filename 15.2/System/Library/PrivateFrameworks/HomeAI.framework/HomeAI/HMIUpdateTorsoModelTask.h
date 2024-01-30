@class NSSet;

@interface HMIUpdateTorsoModelTask : HMIHomeTask

@property (readonly) NSSet *torsoAnnotations;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 torsoAnnotations:(id)a2;

@end
