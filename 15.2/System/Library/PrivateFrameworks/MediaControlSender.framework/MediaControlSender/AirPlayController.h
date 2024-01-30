@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_cnx;
}

@property (copy, nonatomic) NSString *xpcName;

- (id)_setupConnection;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)performCommand:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)postEvent:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)getProperty:(id)a0 qualifier:(id)a1 completion:(id /* block */)a2;
- (void)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (int)performCommand:(id)a0 qualifier:(id)a1 params:(id)a2 response:(id *)a3;
- (void)postEvent:(id)a0 qualifier:(id)a1 params:(id)a2;
- (id)getProperty:(id)a0 qualifier:(id)a1 status:(int *)a2;
- (int)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2;

@end
