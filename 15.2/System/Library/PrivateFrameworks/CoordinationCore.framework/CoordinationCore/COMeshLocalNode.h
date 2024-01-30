@class NSDictionary, NSArray, NSSet;

@interface COMeshLocalNode : COMeshNode

@property (copy, nonatomic) NSDictionary *commands;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) id /* block */ controlFlagsProvider;
@property (copy, nonatomic) NSSet *acceptableCommands;

- (void)_handleFoundDevice:(id)a0;
- (id)_nodeForIDSIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)_invalidateAndReintroduceNode:(id)a0;
- (void)_handleEventIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 fromNode:(id)a3;
- (void)_handleLostDevice:(id)a0;
- (void)_handleRequestIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 fromNode:(id)a4 at:(unsigned long long)a5;
- (id)initWithCompanionLinkClient:(id)a0 source:(id)a1;

@end
