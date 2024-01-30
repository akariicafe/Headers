@class NSString, NSMapTable, NSMutableArray;

@interface SLDRemoteRenderingService : NSObject <SLDService>

@property (retain, nonatomic) NSMapTable *connectionViewIDs;
@property (retain, nonatomic) NSMapTable *viewIDConnections;
@property (retain, nonatomic) NSMapTable *viewIdentifierMap;
@property (retain, nonatomic) NSMutableArray *viewLRUCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasConnections;
- (void)lostConnection:(id)a0;
- (void)_allConnectionsDisconnected;
- (void)_connection:(id)a0 doesNotNeedViewWithIdentifier:(id)a1;
- (void)_connection:(id)a0 onlyNeedsViewWithIdentifier:(id)a1;
- (void)_connectionTouchedView:(id)a0;
- (void)_destroyViewWithID:(id)a0;
- (id)_remoteContentForViewIdentifier:(id)a0 layerContextID:(unsigned long long)a1 connection:(id)a2;
- (id)_viewIDForStyle:(id)a0 tag:(id)a1;
- (void)receivedConnection:(id)a0;
- (id)slotMachineForViewIdentifier:(id)a0;

@end
