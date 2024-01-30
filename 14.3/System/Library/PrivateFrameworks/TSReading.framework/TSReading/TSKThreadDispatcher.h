@interface TSKThreadDispatcher : NSObject

+ (id)sharedInstance;

- (void)dispatch:(id /* block */)a0;
- (id)p_dispatchQueue;
- (void)dispatchSelector:(SEL)a0 target:(id)a1 argument:(id)a2;

@end
