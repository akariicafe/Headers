@class NSObject;
@protocol OS_dispatch_queue;

@interface CFCommandQueuer : NSObject

@property (retain) NSObject<OS_dispatch_queue> *commandQueue;

- (void).cxx_destruct;
- (void)dispatchOneWayCommand:(id)a0 withServiceHelper:(id)a1;
- (void)dispatchCommand:(id)a0 withServiceHelper:(id)a1 reply:(id /* block */)a2;
- (void)dispatchBlock:(id /* block */)a0;
- (id)initWithCommandIdentifier:(id)a0;
- (void)dispatchCommand:(id)a0 isOneWay:(BOOL)a1 withServiceHelper:(id)a2 reply:(id /* block */)a3;
- (void)initQueuesWithIdentifier:(id)a0;

@end
