@class NSObject;
@protocol OS_dispatch_source;

@interface NPResolver : NWResolver

@property (copy) id /* block */ resolveCompletionHandler;
@property (retain) NSObject<OS_dispatch_source> *resolveTimer;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)resolveWithCompletionHandler:(id /* block */)a0;

@end
