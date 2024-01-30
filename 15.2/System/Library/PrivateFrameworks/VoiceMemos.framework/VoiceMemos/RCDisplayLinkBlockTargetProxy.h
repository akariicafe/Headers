@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy

@property (readonly, copy, nonatomic) id /* block */ handlerBlock;

- (void)displayLinkFired:(id)a0;
- (void)dealloc;
- (id)initWithHandlerBlock:(id /* block */)a0;

@end
