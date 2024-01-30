@interface SXMotionComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) double amplitude;
@property (readonly, nonatomic) BOOL windowed;
@property (readonly, nonatomic) BOOL horizontal;
@property (readonly, nonatomic) BOOL vertical;

- (Class)handlerClassForComponent:(id)a0;

@end
