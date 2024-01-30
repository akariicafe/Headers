@interface SXFadeComponentAnimation : SXComponentAnimation

@property (readonly, nonatomic) double initialAlpha;

- (Class)handlerClass;
- (int)transitionBehavior;

@end
