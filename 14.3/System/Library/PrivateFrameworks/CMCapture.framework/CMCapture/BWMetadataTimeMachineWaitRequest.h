@interface BWMetadataTimeMachineWaitRequest : BWMetadataTimeMachineRequest

@property (readonly, nonatomic) int capacity;
@property (readonly, nonatomic) int completionCapacity;

- (void)completeWithCapacity:(int)a0;
- (id)initWithCapacity:(int)a0;

@end
