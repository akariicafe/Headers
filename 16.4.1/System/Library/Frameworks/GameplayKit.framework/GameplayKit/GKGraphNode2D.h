@interface GKGraphNode2D : GKGraphNode {
    void *_cGraphNode2D;
}

@property (nonatomic) void /* unknown type, empty encoding */ position;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithPoint:(SEL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithPoint:(SEL)a0;
- (void *)cGraphNode2D;
- (float)costToNode:(id)a0;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:(id)a0;
- (void *)makeCGraphNode;

@end
