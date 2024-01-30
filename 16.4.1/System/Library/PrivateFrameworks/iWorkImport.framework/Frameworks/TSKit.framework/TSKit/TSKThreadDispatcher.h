@interface TSKThreadDispatcher : NSObject

@property (class, readonly) TSKThreadDispatcher *sharedInstance;

- (void)dispatch:(id /* block */)a0;
- (id)p_dispatchQueue;

@end
