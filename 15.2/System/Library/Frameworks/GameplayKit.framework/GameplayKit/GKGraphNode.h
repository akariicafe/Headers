@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {
    NSMutableArray *_connectedNodes;
    void *_cGraphNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *connectedNodes;

+ (id)node;

- (void)removeConnection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (float)costToNode:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (void *)cGraphNode;
- (id)findPathToNode:(id)a0;
- (void)deleteCGraphNode;
- (void *)makeCGraphNode;
- (id)findPathFromNode:(id)a0;
- (void)addConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (id)mutConnectedNodes;
- (void)addConnection:(id)a0 bidirectional:(BOOL)a1;
- (void)removeConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;

@end
