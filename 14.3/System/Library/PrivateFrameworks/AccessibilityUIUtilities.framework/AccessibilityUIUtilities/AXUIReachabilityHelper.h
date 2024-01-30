@interface AXUIReachabilityHelper : NSObject

+ (id)sharedHelper;

- (double)reachabilityOffsetForPayload:(id)a0;
- (void)animateForReachability:(id /* block */)a0 payload:(id)a1 completion:(id /* block */)a2;

@end
