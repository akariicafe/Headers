@interface OZJSBehavior : NSObject <OZBehaviorJSExport>

@property (nonatomic) void *behavior;

+ (id)behaviorWithBehavior:(void *)a0;

- (void)setStartTime:(float)a0;
- (id)initWithBehavior:(void *)a0;

@end
