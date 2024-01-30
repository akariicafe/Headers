@interface CLSiloIdleHandler : NSObject

@property (copy) id /* block */ onIdle;
@property (copy) id /* block */ onResume;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdleHandler:(id /* block */)a0 onResume:(id /* block */)a1;

@end
