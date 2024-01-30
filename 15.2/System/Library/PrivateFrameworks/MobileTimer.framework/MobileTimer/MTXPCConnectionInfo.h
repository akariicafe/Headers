@class NSString, NSXPCInterface;

@interface MTXPCConnectionInfo : NSObject

@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedObjectInterface;
@property (copy, nonatomic) NSString *lifecycleNotification;
@property (copy, nonatomic) NSString *requiredEntitlement;
@property (nonatomic) unsigned long long options;

+ (id)infoForMachServiceName:(id)a0 remoteObjectInterface:(id)a1 options:(unsigned long long)a2;
+ (id)infoForMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObject:(id)a2 exportedObjectInterface:(id)a3 lifecycleNotification:(id)a4 requiredEntitlement:(id)a5 options:(unsigned long long)a6;

- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObject:(id)a2 exportedObjectInterface:(id)a3 lifecycleNotification:(id)a4 requiredEntitlement:(id)a5 options:(unsigned long long)a6;
- (id)description;
- (void).cxx_destruct;

@end
