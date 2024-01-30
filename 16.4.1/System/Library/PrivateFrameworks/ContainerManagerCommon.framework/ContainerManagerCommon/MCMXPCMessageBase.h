@class NSString, NSObject;
@protocol OS_xpc_object, MCMContext;

@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>

@property (readonly, nonatomic) id<MCMContext> context;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIdentityForContainerIdentifier:(id)a0 clientIdentity:(id)a1 containerClass:(unsigned long long)a2 error:(unsigned long long *)a3;
+ (id)xpcMessageFromXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)userIdentityFromClientPersonaUniqueString:(id)a0 clientIdentity:(id)a1 error:(unsigned long long *)a2;
- (id)nsStringValueFromXPCObject:(id)a0 key:(const char *)a1;
- (id)concreteContainerIdentityFromXPCObject:(id)a0 identifierKey:(const char *)a1 classKey:(const char *)a2 UUIDKey:(const char *)a3 personaUniqueStringKey:(const char *)a4 context:(id)a5 error:(unsigned long long *)a6;
- (id)containerIdentityFromXPCObject:(id)a0 identifierKey:(const char *)a1 classKey:(const char *)a2 transientKey:(const char *)a3 context:(id)a4 error:(unsigned long long *)a5;
- (id)identifierFromXPCObject:(id)a0 elseClientIdentifier:(id)a1;
- (id)nsObjectFromXPCObject:(id)a0 key:(const char *)a1;
- (id)nsUUIDValueFromXPCObject:(id)a0 key:(const char *)a1;
- (id)userIdentityFromXPCObject:(id)a0 key:(const char *)a1 containerClass:(unsigned long long)a2 clientIdentity:(id)a3 error:(unsigned long long *)a4;

@end
