@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy

@property (readonly, copy, nonatomic) id /* block */ handlerBlock;

- (void)dealloc;
- (void)displayLinkFired:(id)a0;
- (id)initWithHandlerBlock:(id /* block */)a0;

@end
