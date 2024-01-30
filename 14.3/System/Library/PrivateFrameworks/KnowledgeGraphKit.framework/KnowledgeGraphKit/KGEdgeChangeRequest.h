@class NSNumber, NSDictionary;
@protocol KGEdge;

@interface KGEdgeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGEdge> edge;
@property (readonly, nonatomic) long long mutationType;
@property (retain, nonatomic) NSNumber *weight;
@property (copy, nonatomic) NSDictionary *properties;

+ (id)changeRequestForEdge:(id)a0;
+ (id)removeRequestForEdge:(id)a0;

- (void).cxx_destruct;
- (id)initWithMutationType:(long long)a0;

@end
