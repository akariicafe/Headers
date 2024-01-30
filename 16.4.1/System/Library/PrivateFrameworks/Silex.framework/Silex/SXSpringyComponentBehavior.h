@interface SXSpringyComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double delta;

- (Class)handlerClassForComponent:(id)a0;

@end
