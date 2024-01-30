@class NSString;

@interface LiveFSMounterClientHelper : NSObject <LiveFSMounterClient, LiveFSMounterClientHelper>

@property (retain) NSString *providerName;

- (void).cxx_destruct;
- (void)LiveMounterClientCreateDomain:(id)a0 displayName:(id)a1 how:(int)a2 storageName:(id)a3 reply:(id /* block */)a4;
- (void)createDomain:(id)a0 displayName:(id)a1 how:(int)a2 reply:(id /* block */)a3;
- (void)createDomain:(id)a0 how:(int)a1 reply:(id /* block */)a2;
- (id)destroyDomain:(id)a0;
- (void)internalSetProviderName:(id)a0;

@end
