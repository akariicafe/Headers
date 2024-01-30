@class NSString, NSXPCInterface, NSObject;

@interface FMXPCServiceDescription : NSObject

@property (copy, nonatomic) NSString *machService;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject *exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (id)initInternalWithMachServiceName:(id)a0 options:(unsigned long long)a1 exportedObject:(id)a2 exportedInterface:(id)a3 remoteObjectInterface:(id)a4 interruptionHandler:(id /* block */)a5 invalidationHandler:(id /* block */)a6;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1 remoteObjectInterface:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1 exportedObject:(id)a2 exportedInterface:(id)a3 remoteObjectInterface:(id)a4 interruptionHandler:(id /* block */)a5 invalidationHandler:(id /* block */)a6;

@end
