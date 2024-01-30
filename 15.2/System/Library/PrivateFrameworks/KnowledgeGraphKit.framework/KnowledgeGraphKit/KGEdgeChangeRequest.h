@class NSNumber, NSDictionary;
@protocol KGEdge;

@interface KGEdgeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGEdge> edge;
@property (readonly, nonatomic) NSNumber *weight;
@property (readonly, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithEdge:(id)a0 weight:(id)a1 properties:(id)a2;

@end
