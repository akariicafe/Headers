@protocol RBDaemonContextProviding;

@interface RBRequestManager : NSObject <RBRequestManaging> {
    id<RBDaemonContextProviding> _daemonContext;
}

- (void)executeLaunchRequest:(id)a0 euid:(unsigned int)a1 requestor:(id)a2 entitlements:(id)a3 completion:(id /* block */)a4;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
