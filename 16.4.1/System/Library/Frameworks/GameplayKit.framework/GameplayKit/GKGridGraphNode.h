@interface GKGridGraphNode : GKGraphNode {
    void *_cGridGraphNode;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ gridPosition;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithGridPosition:(SEL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void *)cGridGraphNode;
- (float)costToNode:(id)a0;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:(id)a0;
- (id)initWithGridPosition:(SEL)a0;
- (void *)makeCGraphNode;

@end
