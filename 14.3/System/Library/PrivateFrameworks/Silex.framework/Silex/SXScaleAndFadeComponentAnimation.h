@interface SXScaleAndFadeComponentAnimation : SXComponentAnimation

@property (readonly, nonatomic) double initialAlpha;
@property (readonly, nonatomic) double initialScale;

- (Class)handlerClass;

@end
