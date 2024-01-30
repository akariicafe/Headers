@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface AXIPCServer : NSObject <AXIPCServerClientRegistrationDelegate> {
    id /* block */ _defaultHandler;
    struct __CFRunLoopSource { } *_serverRunLoopSource;
    NSMutableSet *_connectedClients;
    id /* block */ _clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    NSMutableDictionary *_validSecurityTokens;
    unsigned int _assignedServerPort;
    unsigned int _customQueueSize;
}

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (copy, nonatomic) id /* block */ defaultHandler;
@property (retain, nonatomic) NSMutableArray *delayedMessages;
@property (nonatomic) BOOL perPidService;
@property (readonly, nonatomic) unsigned int machPort;
@property (copy, nonatomic) id /* block */ clientInvalidationCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startServerThread;
- (void)removeHandlerForKey:(int)a0;
- (BOOL)_handleErrorWithMessage:(id)a0 outError:(id *)a1;
- (BOOL)_clientHasEntitlementWithPort:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 message:(id)a2 completion:(id /* block */)a3;
- (id)initWithServiceName:(id)a0 perPidService:(BOOL)a1;
- (void)removePossibleRequiredEntitlement:(id)a0 forMessageWithKey:(int)a1;
- (BOOL)_hasEntitlement:(id)a0 entitlements:(id)a1 clientPort:(unsigned int)a2 auditToken:(struct { unsigned int x0[8]; })a3 message:(id)a4 completion:(id /* block */)a5;
- (BOOL)startServerWithError:(id *)a0;
- (void)setHandlerWithTarget:(id)a0 selector:(SEL)a1 async:(BOOL)a2 forKey:(int)a3 possibleRequiredEntitlements:(id)a4;
- (void)setQueueSize:(unsigned int)a0;
- (void)_registerContext:(id)a0 forKey:(int)a1;
- (BOOL)__slowpath__clientWithAuditToken:(struct { unsigned int x0[8]; })a0 hasRequiredEntitlementFromSet:(id)a1;
- (void)setHandlerWithTarget:(id)a0 selector:(SEL)a1 async:(BOOL)a2 forKey:(int)a3;
- (id)initWithPort:(unsigned int)a0 serviceRunLoopSource:(struct __CFRunLoopSource { } *)a1;
- (void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)a0 first:(id)a1 vothers:(char *)a2;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource { } *)a0;
- (BOOL)stopServerWithError:(id *)a0;
- (void)addPossibleRequiredEntitlement:(id)a0 forMessageWithKey:(int)a1;
- (void)removeAllHandlersForTarget:(id)a0;
- (void)setHandlerWithTarget:(id)a0 selector:(SEL)a1 forKey:(int)a2 possibleRequiredEntitlements:(id)a3;
- (void)_handleClientRegistration:(id)a0;
- (id)_clientIdentificationForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_handleIncomingMessage:(id)a0 securityToken:(struct { unsigned int x0[2]; })a1 auditToken:(struct { unsigned int x0[8]; })a2 clientPort:(unsigned int)a3 completion:(id /* block */)a4;
- (void)serverClientRegistrationInvalidated:(id)a0;
- (void)dealloc;
- (void)setHandlerWithTarget:(id)a0 selector:(SEL)a1 forKey:(int)a2;
- (void)_applyCustomQueueSize;
- (void)setHandler:(id /* block */)a0 forKey:(int)a1;
- (void)_handleClientInvalidation:(unsigned int)a0;
- (void)_processValidatedMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
