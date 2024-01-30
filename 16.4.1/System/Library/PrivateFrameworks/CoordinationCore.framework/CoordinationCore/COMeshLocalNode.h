@class NSSet, NSDictionary, NSArray;

@interface COMeshLocalNode : COMeshNode

@property (copy, nonatomic) NSSet *acceptableCommands;
@property (copy, nonatomic) NSDictionary *commands;
@property (copy, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) unsigned short listeningPort;
@property (readonly, nonatomic) NSArray *pendingActivation;
@property (readonly, nonatomic) NSSet *ignoredIDSIdentifiers;

- (void)activate;
- (void).cxx_destruct;
- (id)IDSIdentifier;
- (id)_createNodeForDevice:(id)a0 configure:(id /* block */)a1;
- (void)_handleActivation:(id)a0;
- (id)_handleDiscoveryRecord:(id)a0;
- (void)_handleEventIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 fromNode:(id)a3;
- (void)_handleFoundDevice:(id)a0;
- (void)_handleLostDevice:(id)a0;
- (void)_handleLostNode:(id)a0;
- (void)_handleRequestIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 fromNode:(id)a4 at:(unsigned long long)a5;
- (void)_invalidateAndReintroduceNode:(id)a0;
- (id)_nodeForIDSIdentifier:(id)a0;
- (void)_updateListeningPort:(id)a0;
- (id)initWithCompanionLinkClient:(id)a0 source:(id)a1;

@end
