@interface BGNonRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) double scheduleAfter;
@property (nonatomic) double trySchedulingBefore;

- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
