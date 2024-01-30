@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject

@property (retain) NSMutableDictionary *nodeNameToNodeID;
@property (retain) NSMutableDictionary *nodeIDToNodeName;

+ (id)sharedInstance;

- (void)setupNodes;
- (void)removeNodeReferenceFromCache:(id)a0;
- (id)nodeIDForNodeName:(id)a0 isPermanent:(BOOL)a1;
- (id)childNodeIDsFromChildNodeNames:(id)a0;
- (id)init;
- (id)nodeNameForNodeID:(id)a0;
- (void).cxx_destruct;

@end
