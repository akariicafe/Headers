@class NSObject;
@protocol OS_xpc_object;

@interface NWPHContext : NSObject

@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *request;
@property (retain) NSObject<OS_xpc_object> *reply;
@property (readonly, nonatomic) int pid;

- (id)initWithRequest:(id)a0 onConnection:(id)a1;
- (void).cxx_destruct;

@end
