@class NSMutableDictionary, NSObject;
@protocol NWRemoteConnectionActorDelegate;

@interface NWRemoteConnectionActor : NSObject

@property (weak) NSObject<NWRemoteConnectionActorDelegate> *delegate;
@property (retain) NSMutableDictionary *connections;
@property (retain) NSMutableDictionary *browsers;

- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)receiveRemoteCommand:(id)a0;
- (void)scheduleReadsOnConnection:(id)a0;
- (void)sendData:(id)a0 forConnection:(id)a1;
- (void)updateEndpointsForBrowser:(id)a0;
- (void)updatePathForConnection:(id)a0;

@end
