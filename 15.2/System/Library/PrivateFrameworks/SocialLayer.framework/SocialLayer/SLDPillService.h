@class UISSlotMachine, NSMapTable, NSString, NSMutableArray;

@interface SLDPillService : NSObject <SLDService, SLDPillService>

@property (retain, nonatomic) UISSlotMachine *highlightPillSlotMachine;
@property (retain, nonatomic) UISSlotMachine *highlightDisambiguationPillSlotMachine;
@property (retain, nonatomic) NSMapTable *connectionPillIDs;
@property (retain, nonatomic) NSMapTable *pillIDConnections;
@property (retain, nonatomic) NSMapTable *pillIdentifierMap;
@property (retain, nonatomic) NSMutableArray *pillLRUCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;

- (void)highlightDisambiguationPillForAttributionIdentifier:(id)a0 style:(id)a1 maxWidth:(double)a2 variant:(unsigned long long)a3 layerContextID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)accessibilityLabelForAttributionIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)accessibilityLabelForAttributionIdentifier:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)highlightPillForAttributionIdentifiers:(id)a0 style:(id)a1 maxWidth:(double)a2 variant:(unsigned long long)a3 layerContextID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)_connection:(id)a0 doesNotNeedPillWithIdentifier:(id)a1;
- (BOOL)_hasConnections;
- (void)_allConnectionsDisconnected;
- (id)_applicationIdentifierForConnection:(id)a0;
- (id)_attributionsFromIDs:(id)a0 appID:(id)a1;
- (id)_pillIDForStyle:(id)a0 tag:(id)a1;
- (void)_connection:(id)a0 onlyNeedsPillWithIdentifier:(id)a1;
- (id)_remoteContentForPillIdentifier:(id)a0 layerContextID:(unsigned long long)a1 connection:(id)a2;
- (void)_connectionTouchedPill:(id)a0;
- (void)_destroyPillWithID:(id)a0;
- (id)_slotMachineForPillIdentifier:(id)a0;
- (void)receivedConnection:(id)a0;
- (void)lostConnection:(id)a0;

@end
