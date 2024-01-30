@class NSString, NSHashTable, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface SBSExternalDisplayService : NSObject <SBSExternalDisplayServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_queue_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (oneway void)externalDisplayDidConnect:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (oneway void)externalDisplayWillDisconnect:(id)a0;
- (id)_connection;
- (void).cxx_destruct;
- (void)setMirroringEnabled:(BOOL)a0 forDisplay:(id)a1;
- (oneway void)externalDisplayDidUpdateProperties:(id)a0;
- (void)getConnectedDisplayInfoWithCompletionHandler:(id /* block */)a0;
- (void)setDisplayArrangement:(id)a0 forDisplay:(id)a1;
- (void)setSettings:(id)a0 forDisplay:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
