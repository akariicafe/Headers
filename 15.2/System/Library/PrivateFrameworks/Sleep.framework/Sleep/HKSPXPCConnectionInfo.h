@class NSString, NSXPCInterface;

@interface HKSPXPCConnectionInfo : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, nonatomic) id exportedObject;
@property (readonly, nonatomic) NSXPCInterface *exportedObjectInterface;
@property (readonly, copy, nonatomic) NSString *lifecycleNotification;
@property (readonly, copy, nonatomic) NSString *requiredEntitlement;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoForMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObject:(id)a2 exportedObjectInterface:(id)a3 lifecycleNotification:(id)a4 requiredEntitlement:(id)a5 options:(unsigned long long)a6;

- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObject:(id)a2 exportedObjectInterface:(id)a3 lifecycleNotification:(id)a4 requiredEntitlement:(id)a5 options:(unsigned long long)a6;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
