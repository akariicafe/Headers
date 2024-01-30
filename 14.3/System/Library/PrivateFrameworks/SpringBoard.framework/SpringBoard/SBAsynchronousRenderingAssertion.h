@interface SBAsynchronousRenderingAssertion : BSSimpleAssertion

@property (nonatomic) BOOL wantsMinificationFilter;

- (id)initWithReason:(id)a0;
- (id)initWithReason:(id)a0 wantsMinificationFilter:(BOOL)a1;

@end
