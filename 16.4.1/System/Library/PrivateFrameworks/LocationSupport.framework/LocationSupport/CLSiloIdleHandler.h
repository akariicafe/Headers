@interface CLSiloIdleHandler : NSObject

@property (copy) id /* block */ onIdle;
@property (copy) id /* block */ onResume;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithIdleHandler:(id /* block */)a0 onResume:(id /* block */)a1;

@end
