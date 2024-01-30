@class NSArray;

@interface KNSlideNodeDepthMap : NSObject

@property (readonly, nonatomic) NSArray *slideNodes;
@property (readonly, nonatomic) NSArray *depthsOfSlideNodes;

- (void).cxx_destruct;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(id /* block */)a0;
- (id)initWithSlideNodes:(id)a0 depths:(id)a1;

@end
