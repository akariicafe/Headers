@interface SXParallaxComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) int cachedDirection;
@property (readonly, nonatomic) double factor;
@property (readonly, nonatomic) int direction;

- (int)directionWithValue:(id)a0 withType:(int)a1;
- (Class)handlerClassForComponent:(id)a0;

@end
