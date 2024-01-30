@class NSUUID, NSXPCConnection, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue;

@interface FMXPCSession : NSObject

@property (retain, nonatomic) id _proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id proxy;

- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (void)destroyXPCConnection;
- (void)suspend;
- (void)dealloc;
- (void)invalidate;
- (id)initWithServiceDescription:(id)a0;
- (void).cxx_destruct;
- (void)resume;

@end
