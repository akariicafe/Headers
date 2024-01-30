@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject

@property (retain) NSMutableDictionary *nodeNameToNodeID;
@property (retain) NSMutableDictionary *nodeIDToNodeName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)nodeIDForNodeName:(id)a0 isPermanent:(BOOL)a1;
- (id)childNodeIDsFromChildNodeNames:(id)a0;
- (id)nodeNameForNodeID:(id)a0;
- (void)setupNodes;

@end
