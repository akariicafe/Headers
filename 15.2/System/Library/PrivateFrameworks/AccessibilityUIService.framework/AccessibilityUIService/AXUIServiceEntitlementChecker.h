@class NSMutableArray;

@interface AXUIServiceEntitlementChecker : NSObject

@property (nonatomic) Class serviceClass;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSMutableArray *entitlementsCaches;

- (BOOL)_clientProcessWithAuditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;
- (BOOL)serviceCanProcessMessageWithIdentifier:(unsigned long long)a0 fromClientWithConnection:(id)a1 possibleRequiredEntitlements:(id *)a2;
- (id)_singleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)a0;
- (void)clientConnectionWillBeTerminated:(id)a0;
- (unsigned long long)_indexOfClientConnection:(id)a0;
- (void).cxx_destruct;
- (id)_possibleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithServiceClass:(Class)a0;

@end
