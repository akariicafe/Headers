@interface GKGridGraphNode : GKGraphNode {
    void *_cGridGraphNode;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ gridPosition;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithGridPosition:(SEL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (float)costToNode:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (void *)cGridGraphNode;
- (void)deleteCGraphNode;
- (void *)makeCGraphNode;
- (id)initWithGridPosition:(SEL)a0;

@end
