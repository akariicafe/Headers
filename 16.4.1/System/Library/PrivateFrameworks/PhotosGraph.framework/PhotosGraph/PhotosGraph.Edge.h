@class NSSet, NSDictionary;

@interface PhotosGraph.Edge : NSObject <KGEdge> {
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ targetNode;
@property (nonatomic, retain) void /* unknown type, empty encoding */ sourceNode;
@property (nonatomic) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, copy) NSSet *labels;
@property (nonatomic, copy) NSDictionary *properties;

- (void)resolveIdentifier:(unsigned long long)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)oppositeNodeFromNode:(id)a0;

@end
