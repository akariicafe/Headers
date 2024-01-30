@class NSArray;

@interface KNSlideNodeDepthMap : NSObject

@property (readonly, nonatomic) NSArray *slideNodes;
@property (readonly, nonatomic) NSArray *depthsOfSlideNodes;

- (void).cxx_destruct;
- (id)initWithSlideNodes:(id)a0 depths:(id)a1;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(id /* block */)a0;

@end
