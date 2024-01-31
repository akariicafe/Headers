@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, NSLock;

@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_clientsByIdentifier;
    NSLock *_clientsByIdentifierLock;
    NSMutableDictionary *_waitForClientRegistriesByIdentifier;
    NSLock *_waitForClientRegistriesByIdentifierLock;
    NSMutableSet *_anonymousClients;
    NSLock *_anonymousClientsLock;
    NSMutableSet *_clientPIDs;
    NSLock *_clientPIDsLock;
    unsigned long long _nextWaitForClientTokenValue;
    NSLock *_nextWaitForClientTokenValueLock;
}

@property (copy, nonatomic) id /* block */ clientRegistrationHandler;
@property (copy, nonatomic) id /* block */ clientUnregistrationHandler;
@property (readonly, nonatomic) NSDictionary *clientsByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClientManager;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_addClient:(id)a0;
- (void)_removeClient:(id)a0;
- (void)enumerateClientsWithBlock:(id /* block */)a0;
- (void)stopWaitingForClientWithIdentifier:(id)a0 forToken:(id)a1;
- (id)waitForClientWithIdentifier:(id)a0 handler:(id /* block */)a1;

@end
