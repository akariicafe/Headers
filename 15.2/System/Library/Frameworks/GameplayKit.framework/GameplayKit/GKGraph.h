@class NSArray, NSMutableDictionary, NSMutableArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_nodes;
    void *_cGraph;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_info;
@property (readonly, nonatomic) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)removeNodes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (void *)cGraph;
- (id)initWithNodes:(id)a0;
- (void)addNodes:(id)a0;
- (void *)makeCGraph;
- (id)nodesMut;
- (void)connectNodeToLowestCostNode:(id)a0 bidirectional:(BOOL)a1;
- (id)findPathFromNode:(id)a0 toNode:(id)a1;

@end
