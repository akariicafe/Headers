@interface DDDiscoverySession : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;

- (void)reportEvent:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
