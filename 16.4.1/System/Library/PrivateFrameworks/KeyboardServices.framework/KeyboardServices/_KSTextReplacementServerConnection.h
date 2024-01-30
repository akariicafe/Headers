@class NSString, NSXPCConnection;

@interface _KSTextReplacementServerConnection : NSObject <_KSTextReplacementServiceProtocol> {
    NSXPCConnection *_serviceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceConnection;

- (void)removeAllEntries;
- (void)requestSyncWithReply:(id /* block */)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withReply:(id /* block */)a2;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)cancelPendingUpdatesWithReply:(id /* block */)a0;
- (id)textReplacementEntries;
- (void).cxx_destruct;
- (void)queryTextReplacementsWithPredicate:(id)a0 reply:(id /* block */)a1;

@end
