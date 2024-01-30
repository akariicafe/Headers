@class NSHashTable;

@interface MSAutosave : MSXPCService

@property (retain, nonatomic) NSHashTable *activeAutosaveSessions;

+ (id)log;
+ (id)autosave;

- (void)getIdleAutosaves:(id /* block */)a0;
- (id)newConnectionForInterface:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRemoteObjectInterface:(id)a0;
- (id)_timeout;
- (id)autosavedMessageDataWithIdentifier:(id)a0 error:(id *)a1;
- (void)autosaveSessionForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_getRemoteAutosaveSessionForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeAutosavedMessageWithIdentifier:(id)a0;
- (void)autosaveMessageData:(id)a0 replacingIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_handleInterruptedConnection;
- (BOOL)hasAutosavedMessageWithIdentifier:(id)a0;

@end
