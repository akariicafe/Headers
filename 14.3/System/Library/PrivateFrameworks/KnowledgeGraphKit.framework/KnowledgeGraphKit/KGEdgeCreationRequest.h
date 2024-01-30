@class KGEdgePlaceholder, NSArray, NSDictionary, NSNumber;
@protocol KGNode;

@interface KGEdgeCreationRequest : KGEdgeChangeRequest {
    NSNumber *_weight;
    NSDictionary *_properties;
}

@property (readonly, retain) NSArray *labels;
@property (readonly, nonatomic) id<KGNode> targetNode;
@property (readonly, nonatomic) id<KGNode> sourceNode;
@property (readonly, nonatomic) KGEdgePlaceholder *placeholderForEdge;

+ (id)creationRequestWithLabels:(id)a0 weight:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
+ (id)changeRequestForEdge:(id)a0;

- (void)setProperties:(id)a0;
- (void)setWeight:(id)a0;
- (id)properties;
- (void).cxx_destruct;
- (id)weight;

@end
