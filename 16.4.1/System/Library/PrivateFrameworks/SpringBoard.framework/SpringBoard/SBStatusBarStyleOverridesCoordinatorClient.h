@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) unsigned long long registeredOverrides;

- (void).cxx_destruct;
- (void)acquireAssertionAndDeliverTapContextToClient:(id)a0;
- (id)initWithConnection:(id)a0 andStyleOverrides:(unsigned long long)a1;

@end
