@interface SXComponentAnimation : SXJSONObject

@property (readonly, nonatomic) BOOL userControllable;
@property (readonly, nonatomic) int transitionBehavior;

- (Class)handlerClass;

@end
