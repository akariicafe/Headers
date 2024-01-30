@interface ARUIRingsViewRenderer : ARUIRenderer

@property (readonly, nonatomic) unsigned long long maximumRingCount;

+ (id)rendererForRingGroupController:(id)a0;
+ (id)rendererForRingGroupControllers:(id)a0;

- (id)initWithMaximumRingCount:(unsigned long long)a0;
- (id)initWithMaximumRingCount:(unsigned long long)a0 commandQueue:(id)a1;

@end
